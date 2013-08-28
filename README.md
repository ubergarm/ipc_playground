ipc_playground
===============

A vagrant virtualbox to test out various IPCs including 0mq

Output:
------

*Basic Ping/Pong demo with zmq_send() and zmq_recv()*            


    Connecting to hello world server…
    Sending Ping 0…
    Received PING
    Sent PONG
    Received Pong 0 in 0.001820851 sec
    Sending Ping 1…
    Received PING
    Sent PONG
    Received Pong 1 in 0.001063238 sec
    Sending Ping 2…
    Received PING
    Sent PONG
    Received Pong 2 in 0.000819637 sec
    Sending Ping 3…
    Received PING
    Sent PONG
    Received Pong 3 in 0.000326840 sec


Try it out!
-----------
*Bring up the virtualmachine and provision the server*

    $ vagrant up  # can take a while depending on your network speed
    $ vagrant ssh
    $ cd /vagrant/apps
    $ make
    $ killall zmq_server
    $ ./bin/zmq_server &
    $ ./bin/zmq_client

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
* ~~Install zeromq~~
* ~~Build test programs~~
* ~~Print out stats~~
* ~~Improve test program makefile/library~~
* Add more demos including pub/sub stuff
* Add some scripts to run the test suite and print results


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

