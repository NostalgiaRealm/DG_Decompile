/*
 * _grTextureAuxBufferExt@28 at 1800013c4
 * undefined __fastcall _grTextureAuxBufferExt@28(int param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 1800013c4-180001538
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTextureAuxBufferExt_28
               (int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
               uint param_7)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  WNDPROC pWVar6;
  int iVar7;
  uint uVar8;
  
                    /* 0x13c4  90  _grTextureAuxBufferExt@28
                       0x13c4  190  grTextureAuxBufferExt */
  uVar8 = param_4;
  pWVar6 = (WNDPROC)FUN_1800069ac();
  if (pWVar6[100] != (WNDPROC)0x0) {
    LOCK();
    *(int *)(pWVar6 + 0x60) = *(int *)(pWVar6 + 0x60) + 1;
    UNLOCK();
    if (((((int)uVar8 < 9) && (param_3 < 9)) && (param_6 < 0x10)) &&
       ((param_5 + 3U < 7 && (bVar3 = FUN_180006754(pWVar6,3), bVar3)))) {
      plVar1 = *(longlong **)(pWVar6 + 0x18);
      iVar4 = FUN_180005928(param_7,param_3 + 1,param_4,param_5,param_6);
      iVar7 = param_2 + iVar4 + (int)plVar1[(longlong)param_1 * 0x9d + 0x66];
      iVar4 = FUN_180005928(param_7,param_3,param_3,param_5,param_6);
      uVar8 = *(uint *)(&DAT_180063968 + (longlong)param_3 * 4);
      uVar5 = uVar8 >> ((&DAT_180063963)[param_5] & 0x1f);
      if (uVar8 >> ((&DAT_180063963)[param_5] & 0x1f) == 0) {
        uVar5 = 1;
      }
      uVar2 = uVar8;
      if (-1 < param_5) {
        uVar2 = uVar5;
        uVar5 = uVar8;
      }
      uVar8 = (uVar5 << 0x10 | uVar2) >> 0x10;
      (**(code **)(*plVar1 + 0xd0))(plVar1,param_1,iVar7,iVar4 + iVar7,uVar8,uVar2 & 0xffff,param_6)
      ;
      *(uint *)(*(longlong *)(pWVar6 + 0x18) + 0x17a) = uVar8;
      *(uint *)(*(longlong *)(pWVar6 + 0x18) + 0x17e) = uVar2 & 0xffff;
      *(int *)(*(longlong *)(pWVar6 + 0x18) + 0x182) = iVar7;
      *(int *)(*(longlong *)(pWVar6 + 0x18) + 0x186) = iVar4 + iVar7;
      *(uint *)(*(longlong *)(pWVar6 + 0x18) + 0x18a) = param_6;
    }
    LOCK();
    *(int *)(pWVar6 + 0x60) = *(int *)(pWVar6 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

