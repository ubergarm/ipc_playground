# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|

  config.vm.define :ipc do |ipc_config|
    ipc_config.vm.box = "precise32"
    config.vm.box_url = "http://files.vagrantup.com/precise32.box"
    ipc_config.vm.network :forwarded_port, host: 5555, guest: 5555
    ipc_config.vm.network :private_network, ip: "192.168.33.105"

    #the bootstrap script installs ansible in the VM itself    
    ipc_config.vm.provision :shell, :path => "bootstrap.sh"

    ipc_config.vm.provider :virtualbox do |vb|
      #vb.gui = true
      vb.customize [
		    "modifyvm", :id,
		    "--name", "ipc_playground",
		    "--memory", "1024"
	 	   ]
    end
  end
end
