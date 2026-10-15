/*
 * _grTextureBufferExt@28 at 180001e18
 * undefined __cdecl _grTextureBufferExt@28(int param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 180001e18-180002007
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTextureBufferExt_28
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
  longlong lVar9;
  
                    /* 0x1e18  91  _grTextureBufferExt@28
                       0x1e18  191  grTextureBufferExt */
  lVar7 = FUN_180008ce0();
  if (*(char *)(lVar7 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar7 + 0x60));
    bVar3 = FUN_180009768(lVar7);
    if ((((bVar3 & 1) != 0) &&
        (uVar4 = FUN_18000a930(lVar7),
        (((&DAT_18006f279)[(ulonglong)uVar4 * 0x20] != '\0' && (int)param_4 < 9) && param_3 < 9) &&
        param_6 < 0xf ||
        (((&DAT_18006f279)[(ulonglong)uVar4 * 0x20] != '\0' && (int)param_4 < 9) && param_3 < 9) &&
        param_6 == 0xf)) && (param_5 + 3U < 7)) {
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
      uVar1 = uVar4;
      if (param_5 < 0) {
        uVar1 = uVar2;
        uVar2 = uVar4;
      }
      uVar4 = (uVar1 | uVar2 << 0x10) >> 0x10;
      uVar1 = uVar1 & 0xffff;
      (**(code **)(*plVar8 + 200))(plVar8,param_1,iVar5,iVar6 + iVar5,uVar4,uVar1,param_6);
      *(uint *)(*(longlong *)(lVar7 + 0x18) + 0x166) = uVar4;
      *(uint *)(*(longlong *)(lVar7 + 0x18) + 0x16a) = uVar1;
      *(int *)(*(longlong *)(lVar7 + 0x18) + 0x16e) = iVar5;
      *(int *)(*(longlong *)(lVar7 + 0x18) + 0x172) = iVar6 + iVar5;
      *(uint *)(*(longlong *)(lVar7 + 0x18) + 0x176) = param_6;
      lVar9 = *(longlong *)(lVar7 + 0x18);
      if ((*(char *)(lVar9 + 0xf0) == '\x06') && (*(char *)(lVar9 + 0x19e) != '\0')) {
        SetRect((LPRECT)(lVar9 + 0x11a),0,0,uVar4,uVar1);
        plVar8 = *(longlong **)(lVar7 + 0x18);
        (**(code **)(*plVar8 + 0x1b8))(plVar8,(longlong)plVar8 + 0x11a);
      }
      else {
        *(undefined1 *)(lVar9 + 0x19e) = 0;
      }
    }
    FUN_1800643d0((uint *)(lVar7 + 0x60));
  }
  return;
}

