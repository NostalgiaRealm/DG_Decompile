/*
 * FUN_1006ed31 at 1006ed31
 * undefined __cdecl FUN_1006ed31(undefined4 * param_1)
 * Address ranges: 1006ed31-1006ed96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1006ed31(undefined4 *param_1)

{
  int *this;
  uint uVar1;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  this = (int *)*param_1;
  if ((this[10] != 0) && ((char)this[0xf] != *(char *)(param_1 + 1))) {
    uVar1 = 0;
    *(char *)(this + 0xf) = *(char *)(param_1 + 1);
    if (this[9] != 0) {
      do {
        local_14 = 0;
        local_10 = 0;
        local_c = FUN_100791d2(this,this[5],0);
        local_8 = FUN_10079207(this,this[6],0);
        (**(code **)(*this + 0xc))(this[0xb] * uVar1,&local_14);
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)this[9]);
    }
  }
  return;
}

