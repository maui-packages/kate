# AWK hl test

# BEGIN and END are also matched as patterns
BEGIN {
	p = 0;
}

/some pattern/ {
	p++;
}

# / inside brackets is not considered end of expression
# a loose division operator (/) is not mismatched as a pattern.
$1 =~ /[^abc/]def/ || b == 3 / 5 {

	gsub ( FILENAME );

}



END {
	print p;
}
