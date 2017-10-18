#include "Product.h"


Product::Product() {}
Product::~Product() {}

void Product::ProducePart(){}

ProductPart::ProductPart() {}
ProductPart::~ProductPart(){}
ProductPart* ProductPart::BuildPart() { return 0; }