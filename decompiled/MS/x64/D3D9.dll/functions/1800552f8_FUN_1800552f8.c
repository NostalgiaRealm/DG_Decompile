/*
 * FUN_1800552f8 at 1800552f8
 * undefined8 __fastcall FUN_1800552f8(longlong param_1, ulonglong param_2, int param_3, undefined8 * param_4, int param_5, byte param_6)
 * Address ranges: 1800552f8-1800554eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800552f8(longlong param_1,ulonglong param_2,int param_3,undefined8 *param_4,int param_5,
             byte param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  if ((param_6 & 1) != 0) {
    LOCK();
    bVar6 = *(int *)(param_2 + 0x50) == 2;
    if (bVar6) {
      *(int *)(param_2 + 0x50) = 3;
    }
    UNLOCK();
    if (bVar6) {
      lVar2 = *(longlong *)(param_1 + 0xf6e0);
      piVar1 = (int *)(lVar2 + 0x12c0);
      FUN_1800fab60(piVar1);
      if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_1800553ef:
        plVar3 = *(longlong **)(lVar2 + 0x14a0);
        *plVar3 = param_1;
        plVar3[1] = param_2;
        FUN_1800554ec(plVar3);
      }
      else {
        puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x10);
        if (puVar4 == (undefined8 *)0x0) {
          FUN_1800facb0(piVar1);
          Sleep(100);
          FUN_1800fab60(piVar1);
          goto LAB_1800553ef;
        }
        LOCK();
        *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
        UNLOCK();
        puVar4[1] = 0x10;
        puVar4[2] = param_1;
        puVar5 = (undefined8 *)((longlong)puVar4 + 0x27U & 0xfffffffffffffff8);
        puVar4[3] = param_2;
        *puVar5 = 0;
        *puVar4 = FUN_1800554ec;
        *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
        if (*(char *)(lVar2 + 0x14c5) != '\0') {
          FUN_1800facb0(piVar1);
          SetEvent(*(HANDLE *)(lVar2 + 0x1340));
          goto LAB_18005540f;
        }
      }
      FUN_1800facb0(piVar1);
    }
  }
LAB_18005540f:
  if ((*(int *)(param_2 + 0x50) == 3) && (bVar6 = FUN_180055c9c(param_2), bVar6)) {
    FUN_180057778(param_1 + 0xf808,param_2);
  }
  if ((param_3 == 8) || (param_3 == 9)) {
    if (param_5 - 1U < 3) {
      return 0x80004005;
    }
    if (*(int *)(param_2 + 0x50) != 0) {
LAB_1800554b0:
      *(undefined1 *)(param_2 + 0x58) = 1;
      return 1;
    }
LAB_1800554de:
    if (param_5 != 0) {
      *(undefined4 *)param_4 = *(undefined4 *)(param_2 + 0x28);
    }
  }
  else {
    if (param_3 == 10) {
      if (param_5 - 1U < 7) {
        return 0x80004005;
      }
      if (*(int *)(param_2 + 0x50) != 0) goto LAB_1800554b0;
    }
    else {
      if (param_3 == 0xb) {
        if (param_5 - 1U < 3) {
          return 0x80004005;
        }
        if (*(int *)(param_2 + 0x50) != 0) {
          return 1;
        }
        goto LAB_1800554de;
      }
      if (param_3 != 0xc) {
        return 0x80004005;
      }
      if (param_5 - 1U < 7) {
        return 0x80004005;
      }
      if (*(int *)(param_2 + 0x50) != 0) {
        return 1;
      }
    }
    if (param_5 != 0) {
      *param_4 = *(undefined8 *)(param_2 + 0x28);
    }
  }
  return 0;
}

