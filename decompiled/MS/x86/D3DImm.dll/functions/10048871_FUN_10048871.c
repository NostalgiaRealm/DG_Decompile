/*
 * FUN_10048871 at 10048871
 * undefined __fastcall FUN_10048871(int param_1)
 * Address ranges: 10048871-10048965
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10048871(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  ushort in_FPUControlWord;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  local_c = &local_10;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x94) + 0xc);
  if (*piVar3 != 0) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x94) + 8) + 8))();
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x94) + 8);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x94) + 8) = 0;
    }
  }
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0x80));
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0x7c));
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0x84));
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0x88));
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}

