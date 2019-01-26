Pod::Spec.new do |s|
  s.name     = 'KZProtocolService'
  s.version  = '1.0.1.38'
  s.license  = {:type => 'MIT',:file => 'License'}
  s.summary  = 'protocol'
  s.homepage = 'https://gitlab.com/kztech/kzprotocolservice.git'
  s.authors  = { 'sp' => 'yimo' }
  s.source   = { :git => 'https://github.com/kztecha/kzframework.git', :tag => s.version }
  s.requires_arc = true
  
  #KZProtocolService/*.{h,m}'
  #s.public_header_files = 'KZProtocolService/*.h'

  
  s.platform     = :ios
  s.platform     = :ios, "8.0"

end
