#include "./goods.h"

// Set member variable of goods with given index and price values
bool Goods::SetGoodsInfo(int index, int price) {
  if (index<=0) return false;
  if (price>1000000 || price<0) return false;
  goods_index_ = index;
  goods_price_ = price;
  return true;
}

// Return index information
int Goods::GetIndex() {
  return goods_index_;
}

// Return price informaiton
int Goods::GetPrice() {
  return goods_price_;
}
