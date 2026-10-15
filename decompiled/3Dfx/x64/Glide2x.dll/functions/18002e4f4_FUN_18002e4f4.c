/*
 * FUN_18002e4f4 at 18002e4f4
 * ulonglong __fastcall FUN_18002e4f4(longlong * param_1, int param_2, int param_3, uint param_4, DWORD param_5, int param_6, int param_7, int param_8, undefined8 * param_9, char param_10, char param_11)
 * Address ranges: 18002e4f4-18002e751
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18002e4f4(longlong *param_1,int param_2,int param_3,uint param_4,DWORD param_5,
                       int param_6,int param_7,int param_8,undefined8 *param_9,char param_10,
                       char param_11)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined4 extraout_var;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [32];
  
  local_res8[0] = 1;
  uVar3 = FUN_18005e6b0(param_1[0x638] + 0x12c0);
  if ((char)uVar3 != '\0') {
    uVar5 = FUN_180022108(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,param_11);
    return uVar5;
  }
  lVar2 = param_1[0x638];
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005e070(piVar1);
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_18002e6ae:
    puVar6 = *(undefined8 **)(lVar2 + 0x14a0);
    *puVar6 = param_1;
    *(int *)(puVar6 + 1) = param_2;
    *(int *)((longlong)puVar6 + 0xc) = param_3;
    *(uint *)(puVar6 + 2) = param_4;
    *(DWORD *)((longlong)puVar6 + 0x14) = param_5;
    *(int *)(puVar6 + 3) = param_6;
    *(int *)((longlong)puVar6 + 0x1c) = param_7;
    *(int *)(puVar6 + 4) = param_8;
    *(undefined8 **)((longlong)puVar6 + 0x24) = param_9;
    *(char *)((longlong)puVar6 + 0x2c) = param_10;
    *(char *)(puVar6 + 6) = param_11;
    *(undefined1 **)((longlong)puVar6 + 0x34) = local_res8;
    FUN_18002e754(puVar6);
  }
  else {
    puVar6 = (undefined8 *)FUN_18005e090((longlong)piVar1,0x40);
    if (puVar6 == (undefined8 *)0x0) {
      FUN_18005e1c0(piVar1);
      Sleep(100);
      FUN_18005e070(piVar1);
      goto LAB_18002e6ae;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar6[1] = 0x40;
    puVar8 = (undefined8 *)((longlong)puVar6 + 0x53U & 0xfffffffffffffff8);
    puVar6[2] = param_1;
    *(int *)(puVar6 + 3) = param_2;
    *(int *)((longlong)puVar6 + 0x1c) = param_3;
    *(uint *)(puVar6 + 4) = param_4;
    *(DWORD *)((longlong)puVar6 + 0x24) = param_5;
    *(int *)(puVar6 + 5) = param_6;
    *(int *)((longlong)puVar6 + 0x2c) = param_7;
    *(int *)(puVar6 + 6) = param_8;
    *(undefined8 **)((longlong)puVar6 + 0x34) = param_9;
    *(char *)((longlong)puVar6 + 0x3c) = param_10;
    *(char *)(puVar6 + 8) = param_11;
    *(undefined1 **)((longlong)puVar6 + 0x44) = local_res8;
    *puVar8 = 0;
    *puVar6 = FUN_18002e754;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar8;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_18005e1c0(piVar1);
      BVar4 = SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      uVar7 = CONCAT44(extraout_var,BVar4);
      goto LAB_18002e726;
    }
  }
  uVar7 = FUN_18005e1c0(piVar1);
LAB_18002e726:
  if (param_11 == '\0') {
    uVar7 = FUN_18005e700(param_1[0x638] + 0x12c0);
  }
  return CONCAT71((int7)((ulonglong)uVar7 >> 8),local_res8[0]);
}

