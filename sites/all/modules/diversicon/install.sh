#!/bin/bash
set -e 

# NOTE: The shell * DOES NOT* exit if the command that fails is part of the command 
# list immediately following a while or until keyword, part of the test in an if 
# statement, part of a && or || list, or if the command's return value is being inverted via !

drush dl redirect-7.x-1.0-rc3
drush dl smtp-7.x-1.4

drush -y en redirect
drush -y en smtp
drush -y en blog 