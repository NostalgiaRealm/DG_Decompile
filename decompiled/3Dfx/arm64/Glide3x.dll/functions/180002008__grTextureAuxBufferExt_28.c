/*
 * _grTextureAuxBufferExt@28 at 180002008
 * undefined __cdecl _grTextureAuxBufferExt@28(int param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 180002008-18000219b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTextureAuxBufferExt_28
               (int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
               uint param_7)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
                    /* 0x2008  90  _grTextureAuxBufferExt@28
                       0x2008  190  grTextureAuxBufferExt */
  lVar7 = FUN_180008ce0();
  if (*(char *)(lVar7 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar7 + 0x60));
    if ((((((int)param_4 < 9 && param_3 < 9) && param_6 < 0x10) && (param_5 + 3U < 7)) &&
        (bVar3 = FUN_180009768(lVar7), (bVar3 & 1) != 0)) &&
       (uVar4 = FUN_18000a930(lVar7), (&DAT_18006f279)[(ulonglong)uVar4 * 0x20] != '\0')) {
      plVar8 = *(longlong **)(lVar7 + 0x18);
      iVar6 = param_5;
      uVar4 = param_6;
      iVar5 = FUN_180008380(param_7,param_3 + 1,param_4,param_5,param_6);
      iVar5 = iVar5 + (int)plVar8[(longlong)param_1 * 0x9d + 0x66] + param_2;
      iVar6 = FUN_180008380(param_7,param_3,param_3,iVar6,uVar4);
      uVar2 = *(uint *)(&DAT_1800668d8 + (longlong)param_3 * 4);
      uVar4 = uVar2 >> (ulonglong)((byte)(&DAT_1800668d3)[param_5] & 0x1f);
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      uVar1 = uVar2;
      if (param_5 < 0) {
        uVar1 = uVar4;
        uVar4 = uVar2;
      }
      uVar2 = (uVar4 | uVar1 << 0x10) >> 0x10;
      (**(code **)(*plVar8 + 0xd0))(plVar8,param_1,iVar5,iVar6 + iVar5,uVar2,uVar4 & 0xffff,param_6)
      ;
      *(uint *)(*(longlong *)(lVar7 + 0x18) + 0x17a) = uVar2;
      *(uint *)(*(longlong *)(lVar7 + 0x18) + 0x17e) = uVar4 & 0xffff;
      *(int *)(*(longlong *)(lVar7 + 0x18) + 0x182) = iVar5;
      *(int *)(*(longlong *)(lVar7 + 0x18) + 0x186) = iVar6 + iVar5;
      *(uint *)(*(longlong *)(lVar7 + 0x18) + 0x18a) = param_6;
    }
    FUN_1800643d0((uint *)(lVar7 + 0x60));
  }
  return;
}

