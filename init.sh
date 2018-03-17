module() { eval `/usr/bin/modulecmd bash $*`; }
export -f module
MODULEPATH=$MODULEPATH:./:./modules
export MODULEPATH
