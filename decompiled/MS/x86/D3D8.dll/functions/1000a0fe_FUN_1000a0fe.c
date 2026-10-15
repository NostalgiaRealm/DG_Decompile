/*
 * FUN_1000a0fe at 1000a0fe
 * undefined __fastcall FUN_1000a0fe(uint * param_1, int * param_2, ushort param_3, char param_4)
 * Address ranges: 1000a0fe-1000a137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000a0fe(uint *param_1,int *param_2,ushort param_3,char param_4)

{
  bool bVar1;
  ushort uVar2;
  
  if ((param_4 == '\0') || (param_4 == '\x0f')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  uVar2 = 0xffff;
  if (bVar1) {
    uVar2 = param_3;
  }
  FUN_1000a049(param_1,param_2,uVar2);
  return;
}

