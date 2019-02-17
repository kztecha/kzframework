Pod::Spec.new do |s|
  s.name     = 'KZDemo'
  s.version  = '3.0.0.1'
  s.license  = {:type => 'MIT',:file => 'License'}
  s.summary  = 'TODO'
  s.homepage = 'TODO'
  s.authors  = { 'sp' => 'TODO' }
  s.source   = { :git => 'https://github.com/kztecha/kzframework.git', :tag => s.version }
  s.requires_arc = true
  
  #KZDemo/**/*.{h,m}'
  #s.public_header_files = 'KZDemo/**/*.h'

  
  s.platform     = :ios
  s.platform     = :ios, "8.0"
  s.vendored_frameworks = 'KZDemo.framework'
end
