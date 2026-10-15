/*
 * FUN_1000b611 at 1000b611
 * undefined __fastcall FUN_1000b611(uint * param_1, int * param_2, ushort param_3, char param_4, char param_5)
 * Address ranges: 1000b611-1000b650
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000b611(uint *param_1,int *param_2,ushort param_3,char param_4,char param_5)

{
  bool bVar1;
  ushort uVar2;
  
  if ((param_5 == -0x3d) && ((param_4 == '\0' || (param_4 == '\x0f')))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  uVar2 = 0xffff;
  if (bVar1) {
    uVar2 = param_3;
  }
  FUN_1000b55c(param_1,param_2,uVar2);
  return;
}

