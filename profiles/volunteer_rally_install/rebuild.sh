#!/bin/bash
#
# This command expects to be run within the Volunteer Rally profile directory. To
# generate a full distribution for you it must be a CVS checkout.
#
# To use this command you must have `drush make`, `cvs` and `git` installed.
#
# Original script by Jeff Miccolis for Open Atrium.
#

if [ -f volunteer_rally.make ]; then
  echo -e "\nThis command can be used to run volunteer_rally.make in place, or to generate"
  echo -e "a complete distribution of Volunteer Rally.\n\nWhich would you like?"
  echo "  [1] Rebuild Volunteer Rally in place (overwrites any changes!)."
  echo "  [2] Build a full Volunteer Rally distribution"
  echo -e "Selection: \c"
  read SELECTION

  if [ $SELECTION = "1" ]; then

    # Run volunteer_rally.make only.
    echo "Building Volunteer Rally install profile..."
    rm -Rf modules/contrib modules/development themes/ libraries/
    drush -y make --working-copy --no-core --contrib-destination=. volunteer_rally.make

  elif [ $SELECTION = "2" ]; then

    # Generate a complete tar.gz of Drupal + Volunteer Rally.
    echo "Building Volunteer Rally distribution..."

MAKE=$(cat <<EOF
core = "6.x"\n
api = 2\n
projects[drupal][version] = "6.19"\n
projects[volunteer_rally][type] = "profile"\n
projects[volunteer_rally][download][type] = "git"\n
projects[volunteer_rally][download][url] = "git@github.com:opensourcery/volunteer_rally.git"
EOF
)

      MAKE="$MAKE $TAG\n"
      NAME=`echo "volunteer_rally | tr '[:upper:]' '[:lower:]'`
      echo -e $MAKE | drush make --debug --yes - $NAME
      zip -r $NAME.zip $NAME
      tar -zcf $NAME.tar.gz $NAME
  else
   echo "Invalid selection."
  fi
else
  echo 'Could not locate file "volunteer_rally.make"'
fi
