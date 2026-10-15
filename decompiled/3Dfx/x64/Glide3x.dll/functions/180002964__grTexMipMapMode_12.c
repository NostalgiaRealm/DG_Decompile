/*
 * _grTexMipMapMode@12 at 180002964
 * undefined __fastcall _grTexMipMapMode@12(int param_1, uint param_2, int param_3)
 * Address ranges: 180002964-1800029e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMipMapMode_12(int param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  undefined *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
                    /* 0x2964  84  _grTexMipMapMode@12
                       0x2964  184  grTexMipMapMode */
  uVar6 = (ulonglong)param_1;
  uVar3 = param_2;
  iVar5 = param_3;
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    if ((int)uVar6 < *(int *)(*(longlong *)(puVar2 + 0x30) + 0x833)) {
      plVar1 = *(longlong **)(puVar2 + 0x18);
      lVar4 = uVar6 * 0x55;
      if ((*(byte *)(lVar4 + 0x1af + (longlong)plVar1) != uVar3) ||
         (*(int *)(lVar4 + 0x1b0 + (longlong)plVar1) != iVar5)) {
        (**(code **)(*plVar1 + 0x2d8))(plVar1,uVar6 & 0xffffffff,param_2,param_3);
        *(char *)(lVar4 + 0x1af + *(longlong *)(puVar2 + 0x18)) = (char)param_2;
        *(int *)(lVar4 + 0x1b0 + *(longlong *)(puVar2 + 0x18)) = param_3;
      }
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

