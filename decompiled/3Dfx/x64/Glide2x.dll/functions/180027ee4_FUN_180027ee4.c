/*
 * FUN_180027ee4 at 180027ee4
 * undefined __fastcall FUN_180027ee4(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 * param_6, undefined4 param_7)
 * Address ranges: 180027ee4-180028095
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027ee4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 param_7)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_180026a88(param_1 + 0x34e8);
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_18005e070(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar5 = (undefined8 *)FUN_18005e090((longlong)piVar1,0xb8);
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar5[1] = 0xb8;
      puVar6 = (undefined8 *)((longlong)puVar5 + 0x3bU & 0xfffffffffffffff8);
      puVar5[3] = param_1;
      *(undefined4 *)(puVar5 + 4) = param_2;
      *(undefined4 *)((longlong)puVar5 + 0x24) = param_3;
      *(undefined4 *)(puVar5 + 5) = param_4;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = param_5;
      *(undefined4 *)(puVar5 + 6) = param_7;
      puVar5[2] = puVar6;
      uVar4 = param_6[1];
      *puVar6 = *param_6;
      puVar6[1] = uVar4;
      uVar4 = param_6[3];
      puVar6[2] = param_6[2];
      puVar6[3] = uVar4;
      uVar4 = param_6[5];
      puVar6[4] = param_6[4];
      puVar6[5] = uVar4;
      uVar4 = param_6[7];
      puVar6[6] = param_6[6];
      puVar6[7] = uVar4;
      uVar4 = param_6[9];
      puVar6[8] = param_6[8];
      puVar6[9] = uVar4;
      uVar4 = param_6[0xb];
      puVar6[10] = param_6[10];
      puVar6[0xb] = uVar4;
      uVar4 = param_6[0xd];
      puVar6[0xc] = param_6[0xc];
      puVar6[0xd] = uVar4;
      uVar4 = param_6[0xf];
      puVar6[0xe] = param_6[0xe];
      puVar6[0xf] = uVar4;
      uVar4 = param_6[0x11];
      puVar6[0x10] = param_6[0x10];
      puVar6[0x11] = uVar4;
      puVar6[0x12] = 0;
      *puVar5 = FUN_180028098;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar6 + 0x12
      ;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005e1c0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_180028081;
    }
    FUN_18005e1c0(piVar1);
    Sleep(100);
    FUN_18005e070(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = (longlong)param_6;
  plVar3[1] = param_1;
  *(undefined4 *)(plVar3 + 2) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0x14) = param_3;
  *(undefined4 *)(plVar3 + 3) = param_4;
  *(undefined4 *)((longlong)plVar3 + 0x1c) = param_5;
  *(undefined4 *)(plVar3 + 4) = param_7;
  FUN_180028098(plVar3);
LAB_180028081:
  FUN_18005e1c0(piVar1);
  return;
}

