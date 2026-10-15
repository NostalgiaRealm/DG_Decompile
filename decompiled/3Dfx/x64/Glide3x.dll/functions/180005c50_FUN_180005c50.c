/*
 * FUN_180005c50 at 180005c50
 * undefined __fastcall FUN_180005c50(WNDPROC param_1, int param_2, int param_3, int param_4, uint param_5, int param_6, uint param_7, uint param_8)
 * Address ranges: 180005c50-180005e21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005c50(WNDPROC param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                  uint param_7,uint param_8)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1[100] != (WNDPROC)0x0) {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    bVar5 = FUN_180006754(param_1,3);
    if ((((bVar5) && ((int)param_5 < 9)) && (param_4 < 9)) &&
       ((param_7 < 0x10 && (param_6 + 3U < 7)))) {
      plVar2 = *(longlong **)(param_1 + 0x18);
      iVar6 = FUN_180005928(param_8,param_4 + 1,param_5,param_6,param_7);
      iVar7 = param_3 + iVar6 + (int)plVar2[(longlong)param_2 * 0x9d + 0x66];
      iVar6 = FUN_180005928(param_8,param_4,param_4,param_6,param_7);
      uVar1 = *(uint *)(&DAT_180063968 + (longlong)param_4 * 4);
      uVar8 = uVar1 >> ((&DAT_180063963)[param_6] & 0x1f);
      if (uVar1 >> ((&DAT_180063963)[param_6] & 0x1f) == 0) {
        uVar8 = 1;
      }
      uVar4 = uVar1;
      if (-1 < param_6) {
        uVar4 = uVar8;
        uVar8 = uVar1;
      }
      uVar1 = uVar4 & 0xffff;
      uVar8 = (uVar8 << 0x10 | uVar4) >> 0x10;
      (**(code **)(*plVar2 + 200))(plVar2,param_2,iVar7,iVar6 + iVar7,uVar8,uVar1,param_7);
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x166) = uVar8;
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x16a) = uVar1;
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x16e) = iVar7;
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x172) = iVar6 + iVar7;
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x176) = param_7;
      lVar3 = *(longlong *)(param_1 + 0x18);
      if ((*(char *)(lVar3 + 0xf0) == '\x06') && (*(char *)(lVar3 + 0x19e) != '\0')) {
        SetRect((LPRECT)(lVar3 + 0x11a),0,0,uVar8,uVar1);
        plVar2 = *(longlong **)(param_1 + 0x18);
        (**(code **)(*plVar2 + 0x1b8))(plVar2,(longlong)plVar2 + 0x11a);
      }
      else {
        *(char *)(lVar3 + 0x19e) = '\0';
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

