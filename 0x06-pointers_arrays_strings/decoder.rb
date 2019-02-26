#!/usr/bin/ruby
require 'digest/md5'
?a.upto('zzzzzzz') { |string|
md5=Digest::MD5.hexdigest("abc123")
puts "Trying: #{string}"
if md5 == "e99a18c428cb38d5f260853678922e03"
   puts "\nThe string is #{string}\n"
   exit
end
}
