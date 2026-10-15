/*
 * FUN_1001847b at 1001847b
 * undefined __cdecl FUN_1001847b(undefined4 * param_1)
 * Address ranges: 1001847b-100184e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001847b(undefined4 *param_1)

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
        local_c = FUN_10022186(this,this[5],0);
        local_8 = FUN_100221bb(this,this[6],0);
        (**(code **)(*this + 0xc))(this[0xb] * uVar1,&local_14);
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)this[9]);
    }
  }
  return;
}

