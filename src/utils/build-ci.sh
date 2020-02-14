#!/bin/sh
export V=0
(test ${GOAL} = "test" && make test) || make $(make targets|grep Valid|awk -F' *: *' '{print $2}' | cut -d ' ' -f $(expr ${GOAL} + 1)-$(expr ${GOAL} + 10))
