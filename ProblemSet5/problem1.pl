$var = 'global'

sub visible{
	print"var tiene valor $var/n";
}

sub dynamic{
	local $var = 'local'; #nuevo valor temporal para global
	visible(); #inprimira variable global, $var esta oculta
}

sub lexical{
	my $var = 'private'; #nuevo valor privado
	visible(); #invisible fuera del alcance
}
