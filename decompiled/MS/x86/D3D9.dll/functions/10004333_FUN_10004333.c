/*
 * FUN_10004333 at 10004333
 * undefined __fastcall FUN_10004333(int * param_1)
 * Address ranges: 10004333-10004455
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10004333(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  if (param_1[5] != 0) {
    local_c = &local_10;
    local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    *(undefined1 *)(param_1 + 0xa9) = 0;
    (**(code **)(*param_1 + 0x10))();
    uVar2 = 0;
    if (param_1[0x394] != 0) {
      if (param_1[0x394] == 0) {
        puVar1 = (undefined4 *)&DAT_00000004;
        goto LAB_100043b1;
      }
      do {
        puVar1 = (undefined4 *)((uVar2 << 4 | 0xc) + param_1[0x393]);
LAB_100043b1:
        FUN_100cfd6c((LPVOID)*puVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[0x394]);
    }
    thunk_FUN_100cfd6c((LPVOID)param_1[0x392]);
    param_1[0x392] = 0;
    param_1[0x393] = 0;
    param_1[0x395] = 0;
    param_1[0x394] = 0;
    FUN_100040a8(param_1,0);
    (**(code **)(*(int *)param_1[5] + 0xc))();
    (**(code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
    FUN_100179cf((int)param_1);
    FUN_1000602e((int)param_1);
  }
  return;
}

