#!/usr/bin/ruby

puts 'What is your favorite number?'
fav_number = gets.chomp
new_fav_number = fav_number.to_i + 1
puts ''
puts fav_number + ' is okay...'
puts 'but ' + new_fav_number.to_s + ' is a bigger and better version of ' + fav_number + '.'
puts 'Perhaps your favorite number should be ' + new_fav_number.to_s + ' instead.'
