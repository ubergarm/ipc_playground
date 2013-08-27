ipc_playground
===============

A vagrant virtualbox to test out various IPCs including 0mq


Try it out!
-----------
*Bring up the virtualmachine and provision the server*

    $ vagrant up `can take a while depending on your network speed`
    $ vagrant ssh
    $ sudo -i
    $ cd /vagrant/
    `you could mount a dir into main folder to index it at /vagrant/mnt` 
    `WARNING: crud_dir.py deletes entire index before re-building it!!!`
    $ crud_dir.py ./files_to_index/

_Cleaning up_

    $ vagrant destroy

_To manually clean up stray VMs_

    $ VBoxManage list vms
    $ VBoxManage unregistervm ipc_playground –delete

####Requires:
* [Vagrant](http://www.vagrantup.com/) -- `sudo apt-get install vagrant` 1.2.2
* [VirtualBox](https://www.virtualbox.org/wiki/Downloads/) -- `sudo apt-get install virtualbox-4.2`

####Built On:
* [ansible](https://github.com/ansible/ansible/) -- provisioner loaded up first
* [zeromq](http://http://zeromq.org/) -- light weight but heavy hitting messaging queues

####TODO:
* ~~Base vargrant virtualbox install~~
* ~~Install build tools~~
* Install zeromq
* build test programs
* print out pretty stats


####Issues:
* Find how to extend a standard earth day to 26+ hours long.

####Notes:
* bootstrap.sh does a one-time install of ansible to get the ball rolling

####My workflow:
* git config --global user.name 'Your Name'
* git config --global user.email your@email
* git pull
* edit some code
* git add <new files>
* git commit -am 'fixed some bugs'
* git push -u origin master

####Thanks to:
* zeromq

Contributing
------------

1. Fork it.
2. Create a branch (`git checkout -b my_new_feature`)
3. Commit your changes (`git commit -am "Added Cool Thing"`)
4. Push to the branch (`git push origin my_new_feature`)
5. Open a [Pull Request][1]
6. Enjoy a few plumphelmets while you wait cuz I've never done this before.

[1]: http://github.com/ubergarm/ipc_playground/pulls

