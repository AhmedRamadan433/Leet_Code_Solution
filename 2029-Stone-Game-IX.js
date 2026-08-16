/**
 * @param {number[]} stones
 * @return {boolean}
 */
var stoneGameIX = function (stones) {
  let c0 = 0,
    c1 = 0,
    c2 = 0;
  stones.forEach((stone) => {
    if (stone % 3 === 0) c0++;
    else if (stone % 3 === 1) c1++;
    else if (stone % 3 === 2) c2++;
  });
  if (c0 % 2 == 0) return c1 > 0 && c2 > 0;
  else return Math.abs(c1 - c2) > 2;
};
