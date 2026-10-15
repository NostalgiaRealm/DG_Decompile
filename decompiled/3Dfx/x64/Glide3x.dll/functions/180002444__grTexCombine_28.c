/*
 * _grTexCombine@28 at 180002444
 * undefined __fastcall _grTexCombine@28(int param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 180002444-180002584
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexCombine_28(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                     int param_7)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  longlong lVar5;
  
  uVar3 = (undefined1)param_4;
                    /* 0x2444  73  _grTexCombine@28
                       0x2444  173  grTexCombine */
  lVar5 = (longlong)param_1;
  uVar2 = (undefined1)param_3;
  puVar4 = FUN_1800069ac();
  if (puVar4[100] != '\0') {
    LOCK();
    *(int *)(puVar4 + 0x60) = *(int *)(puVar4 + 0x60) + 1;
    UNLOCK();
    if ((int)lVar5 < *(int *)(*(longlong *)(puVar4 + 0x30) + 0x833)) {
      plVar1 = *(longlong **)(puVar4 + 0x18);
      lVar5 = lVar5 * 0x55;
      if ((((param_2 != *(byte *)(lVar5 + 0x1a3 + (longlong)plVar1)) ||
           (param_3 != *(byte *)(lVar5 + 0x1a4 + (longlong)plVar1))) ||
          (param_4 != *(byte *)(lVar5 + 0x1a5 + (longlong)plVar1))) ||
         (((param_5 != *(byte *)(lVar5 + 0x1a6 + (longlong)plVar1) ||
           (param_6 != *(int *)(lVar5 + 0x1a7 + (longlong)plVar1))) ||
          (param_7 != *(int *)(lVar5 + 0x1ab + (longlong)plVar1))))) {
        (**(code **)(*plVar1 + 0x2c8))();
        *(char *)(lVar5 + 0x1a3 + *(longlong *)(puVar4 + 0x18)) = (char)param_2;
        *(undefined1 *)(lVar5 + 0x1a4 + *(longlong *)(puVar4 + 0x18)) = uVar2;
        *(undefined1 *)(lVar5 + 0x1a5 + *(longlong *)(puVar4 + 0x18)) = uVar3;
        *(char *)(lVar5 + 0x1a6 + *(longlong *)(puVar4 + 0x18)) = (char)param_5;
        *(int *)(lVar5 + 0x1a7 + *(longlong *)(puVar4 + 0x18)) = param_6;
        *(int *)(lVar5 + 0x1ab + *(longlong *)(puVar4 + 0x18)) = param_7;
      }
      FUN_18000791c((longlong)puVar4);
      *(undefined4 *)(*(longlong *)(puVar4 + 0x18) + 0x2a4) = 0;
    }
    LOCK();
    *(int *)(puVar4 + 0x60) = *(int *)(puVar4 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

