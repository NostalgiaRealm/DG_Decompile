/*
 * FUN_1005cba4 at 1005cba4
 * undefined __stdcall FUN_1005cba4(int param_1, int * param_2)
 * Address ranges: 1005cba4-1005cc65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005cba4(int param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint local_70 [12];
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (uint *)(param_1 + 0x1e8);
  bVar2 = *(byte *)(*(int *)(param_1 + 0x10) + 0x441);
  if ((bVar2 & 0xc) != 0xc) {
    FUN_1005abfa(param_1,*puVar1,~bVar2 & 0xc,local_70);
    local_40 = *(undefined4 *)(param_1 + 0xac);
    local_14 = 0;
    local_30 = 0;
    local_18 = 0;
    local_2c = 0;
    local_1c = 0;
    local_28 = 0;
    local_20 = 0x3f800000;
    local_24 = 0x3f800000;
    local_3c = 0xe4;
    FUN_100a14a8((int *)(param_1 + 0x18),param_2,0x36);
  }
  FUN_1005c9ca(param_1,param_2,*puVar1);
  FUN_1005a8c7(param_1,puVar1);
  return;
}

