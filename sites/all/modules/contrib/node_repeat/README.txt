$Id: README.txt,v 1.1.2.1 2009/11/30 02:09:04 olivercoleman Exp $

This module allows creating multiple repeats/duplicates/clones of nodes based on date sequences. The date sequences are created with the Date Repeat module (part of Date). The nodes must have a CCK Date field, which in the new nodes created by Node Repeat are populated with dates from the sequence. A typical use case might be for creating an event that repeats regularly and for which your users need to Signup.

Node types that have one or more Date field(s) can be set to allow repetition by selecting the Date field to use. If a node type is set to allow repetition then a Repeat tab will appear on nodes of that type to allow creating/editing repeats for that node. Under the Repeat tab if the node is already part a sequence then options for editing that sequence are displayed, otherwise options for creating a sequence from the node are displayed.


Features/notes:

    * A node may only belong to a single sequence.
    * The Date field will be populated with the relevant date for each instance of a repeated node, including an end date if available.
    * The nodes belonging to a sequence can be detached from the sequence, making them standalone. Either all nodes belonging to a sequence can be detached, or individual nodes. If all nodes in a sequence have been detached the sequence will be deleted.
    * Once created the duplicate nodes can be edited as normal nodes.
    * If a node belonging to a sequence is deleted this will automatically detach/delete it from the sequence.
    * There's an administration page to view and manage all existing sequences.


Usage

   1. Install and enable the module.
   2. Give the permission Create sequences to roles that need to create sequences.
   3. Create a content type with a Date field (it should be set to NOT use/allow repeats). It's fine to have more than one Date field but only one can be used by Node Repeat. The Date field for newly created nodes will be populated with the relevant date for each instance of a repeated node, including an end date if available.
   4. On the content types main admin page (admin/content/node-type/), in the Node Repeat section, select the Date field to use for node repeat sequences in the Date field for node repeats drop-down.
   5. Also select whether you want nodes in a sequence that have their date changed to be automatically detached from the sequence.
   6. Now when viewing a node of this content type a Repeat tab will be present. Click on it to create or edit sequences.
   7. If the node is not part of a sequence a form for creating a sequence is displayed. Choose a repeat rule and an end date, whether the newly created nodes should be published, and then click the Create new sequence button.
   8. If the node is part of a sequence the repeat rule used to create the sequence is shown, then a list of the nodes in the sequence, and then options for editing the sequence.


Known issues

There's a bug when a sequence extends over a day light savings boundary: it adds/subtracts time from the advertised time for those events that are after the current DST period. The time as stored in the database remains constant, but after DST adjustments is of course different). I'm not quite sure how to handle this, but I guess it needs to compensate for it by adjusting the time stored in the database. Let me know if you know the solution; it's probably something obvious that's already been dealt with or that I'm handling the wrong way *sheepish grin*.


Vague roadmap

One day it might be nice to add the following:

    * Add more nodes to the sequence/increase the sequence end date.
    * Allow modifying the sequence in other ways? (ideas with patches welcome ;))
    * Actions and Views integration.


Other modules using Node Repeat

    * Signup Multiple - allows signing up (as per the Signup module) for multiple nodes at once.
