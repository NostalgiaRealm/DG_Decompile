/*
 * FUN_18002e05c at 18002e05c
 * char __fastcall FUN_18002e05c(longlong * param_1, uint param_2, int param_3, DWORD param_4, int param_5, char param_6, longlong param_7, char param_8)
 * Address ranges: 18002e05c-18002e252
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18002e05c(longlong *param_1,uint param_2,int param_3,DWORD param_4,int param_5,char param_6
                  ,longlong param_7,char param_8)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char local_res8 [32];
  
  uVar4 = FUN_18005e6b0(param_1[0x638] + 0x12c0);
  if ((char)uVar4 != '\0') {
    cVar3 = FUN_180021f30(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return cVar3;
  }
  lVar2 = param_1[0x638];
  local_res8[0] = '\0';
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005e070(piVar1);
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_18002e1d4:
    puVar5 = *(undefined8 **)(lVar2 + 0x14a0);
    *puVar5 = param_1;
    *(uint *)(puVar5 + 1) = param_2;
    *(int *)((longlong)puVar5 + 0xc) = param_3;
    *(DWORD *)(puVar5 + 2) = param_4;
    *(int *)((longlong)puVar5 + 0x14) = param_5;
    *(char *)(puVar5 + 3) = param_6;
    *(longlong *)((longlong)puVar5 + 0x1c) = param_7;
    *(char *)((longlong)puVar5 + 0x24) = param_8;
    puVar5[5] = local_res8;
    FUN_18002e254(puVar5);
  }
  else {
    puVar5 = (undefined8 *)FUN_18005e090((longlong)piVar1,0x30);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_18005e1c0(piVar1);
      Sleep(100);
      FUN_18005e070(piVar1);
      goto LAB_18002e1d4;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar5[1] = 0x30;
    puVar6 = (undefined8 *)((longlong)puVar5 + 0x47U & 0xfffffffffffffff8);
    puVar5[2] = param_1;
    *(uint *)(puVar5 + 3) = param_2;
    *(int *)((longlong)puVar5 + 0x1c) = param_3;
    *(DWORD *)(puVar5 + 4) = param_4;
    *(int *)((longlong)puVar5 + 0x24) = param_5;
    *(char *)(puVar5 + 5) = param_6;
    *(longlong *)((longlong)puVar5 + 0x2c) = param_7;
    *(char *)((longlong)puVar5 + 0x34) = param_8;
    puVar5[7] = local_res8;
    *puVar6 = 0;
    *puVar5 = FUN_18002e254;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar6;
    if (*(char *)(lVar2 + 0x14c5) != '\0') {
      FUN_18005e1c0(piVar1);
      SetEvent(*(HANDLE *)(lVar2 + 0x1340));
      goto LAB_18002e22c;
    }
  }
  FUN_18005e1c0(piVar1);
LAB_18002e22c:
  FUN_18005e700(param_1[0x638] + 0x12c0);
  return local_res8[0];
}

