/*
 * FUN_10056238 at 10056238
 * undefined __stdcall FUN_10056238(int param_1, int * param_2, int param_3, byte param_4)
 * Address ranges: 10056238-100562e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056238(int param_1,int *param_2,int param_3,byte param_4)

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
    FUN_1005abfa(param_1,*(uint *)(param_1 + 0x1ac + param_3 * 4),param_4 & 0xf,local_60);
    puVar1 = &DAT_100b03c0;
    if (param_3 == 2) {
      puVar1 = &DAT_100b03f0;
    }
    else if (param_3 == 3) {
      puVar1 = &DAT_100b03e0;
    }
    else if (param_3 == 4) {
      puVar1 = &DAT_100b03d0;
    }
    local_30 = *(undefined4 *)(param_1 + 0xac);
    local_20 = *puVar1;
    local_1c = puVar1[1];
    local_18 = puVar1[2];
    local_14 = puVar1[3];
    local_2c = 0xe4;
    FUN_100a14a8((int *)(param_1 + 0x18),param_2,0x36);
  }
  return;
}

