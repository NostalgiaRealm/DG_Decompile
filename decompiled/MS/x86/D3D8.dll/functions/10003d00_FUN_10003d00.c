/*
 * FUN_10003d00 at 10003d00
 * undefined __fastcall FUN_10003d00(int * param_1)
 * Address ranges: 10003d00-10003e22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10003d00(int *param_1)

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
    *(undefined1 *)(param_1 + 0x40) = 0;
    (**(code **)(*param_1 + 0x10))();
    uVar2 = 0;
    if (param_1[0x2e3] != 0) {
      if (param_1[0x2e3] == 0) {
        puVar1 = (undefined4 *)&DAT_00000004;
        goto LAB_10003d7e;
      }
      do {
        puVar1 = (undefined4 *)((uVar2 << 4 | 0xc) + param_1[0x2e2]);
LAB_10003d7e:
        FUN_100ad48c((LPVOID)*puVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[0x2e3]);
    }
    thunk_FUN_100ad48c((LPVOID)param_1[0x2e1]);
    param_1[0x2e1] = 0;
    param_1[0x2e2] = 0;
    param_1[0x2e4] = 0;
    param_1[0x2e3] = 0;
    FUN_10003aa0(param_1,0);
    (**(code **)(*(int *)param_1[5] + 0xc))();
    (**(code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
    FUN_1001394c((int)param_1);
    FUN_100057e0((int)param_1);
  }
  return;
}

