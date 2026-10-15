/*
 * FUN_100692b5 at 100692b5
 * undefined __stdcall FUN_100692b5(int param_1, int * param_2, int param_3, byte param_4)
 * Address ranges: 100692b5-10069344
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100692b5(int param_1,int *param_2,int param_3,byte param_4)

{
  undefined4 *puVar1;
  uint local_60 [12];
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_4 & 0xf) != 0) {
    FUN_10070652(param_1,*(uint *)(param_1 + 0x1ac + param_3 * 4),param_4 & 0xf,local_60);
    puVar1 = FUN_10068cb2(param_3);
    local_14 = puVar1[3];
    local_18 = puVar1[2];
    local_1c = puVar1[1];
    local_20 = *puVar1;
    local_2c = 0xe4;
    local_30 = *(undefined4 *)(param_1 + 0xac);
    FUN_100c3cfd((int *)(param_1 + 0x18),param_2,0x36);
  }
  return;
}

