/*
 * _grTexFilterMode@12 at 180002648
 * undefined __fastcall _grTexFilterMode@12(int param_1, uint param_2, uint param_3)
 * Address ranges: 180002648-1800026cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexFilterMode_12(int param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  undefined *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
                    /* 0x2648  80  _grTexFilterMode@12
                       0x2648  180  grTexFilterMode */
  uVar6 = (ulonglong)param_1;
  uVar3 = param_2;
  uVar5 = param_3;
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    if ((int)uVar6 < *(int *)(*(longlong *)(puVar2 + 0x30) + 0x833)) {
      plVar1 = *(longlong **)(puVar2 + 0x18);
      lVar4 = uVar6 * 0x55;
      if ((uVar3 != *(byte *)(lVar4 + 0x1a1 + (longlong)plVar1)) ||
         (uVar5 != *(byte *)(lVar4 + 0x1a2 + (longlong)plVar1))) {
        (**(code **)(*plVar1 + 0x2b0))(plVar1,uVar6 & 0xffffffff,param_2,param_3);
        *(char *)(lVar4 + 0x1a1 + *(longlong *)(puVar2 + 0x18)) = (char)param_2;
        *(char *)(lVar4 + 0x1a2 + *(longlong *)(puVar2 + 0x18)) = (char)param_3;
      }
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

