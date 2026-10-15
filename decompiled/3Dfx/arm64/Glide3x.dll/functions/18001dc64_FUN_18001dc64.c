/*
 * FUN_18001dc64 at 18001dc64
 * undefined __cdecl FUN_18001dc64(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined8 * param_6, undefined4 param_7)
 * Address ranges: 18001dc64-18001ddb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001dc64(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_18001bf90(param_1 + 0x3668);
  lVar4 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_180038310(lVar4 + 0x12c0,0xb8);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar4 + 0x14c0));
      puVar1[1] = 0xb8;
      puVar1[3] = param_1;
      puVar3 = (undefined8 *)((longlong)puVar1 + 0x3bU & 0xfffffffffffffff8);
      *(undefined4 *)(puVar1 + 4) = param_2;
      *(undefined4 *)((longlong)puVar1 + 0x24) = param_3;
      *(undefined4 *)(puVar1 + 5) = param_4;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = param_5;
      *(undefined4 *)(puVar1 + 6) = param_7;
      puVar1[2] = puVar3;
      uVar7 = *param_6;
      uVar6 = param_6[3];
      uVar5 = param_6[2];
      puVar3[1] = param_6[1];
      *puVar3 = uVar7;
      puVar3[3] = uVar6;
      puVar3[2] = uVar5;
      uVar7 = param_6[4];
      uVar6 = param_6[7];
      uVar5 = param_6[6];
      puVar3[5] = param_6[5];
      puVar3[4] = uVar7;
      puVar3[7] = uVar6;
      puVar3[6] = uVar5;
      uVar7 = param_6[8];
      uVar6 = param_6[0xb];
      uVar5 = param_6[10];
      puVar3[9] = param_6[9];
      puVar3[8] = uVar7;
      puVar3[0xb] = uVar6;
      puVar3[10] = uVar5;
      uVar7 = param_6[0xc];
      uVar6 = param_6[0xf];
      uVar5 = param_6[0xe];
      puVar3[0xd] = param_6[0xd];
      puVar3[0xc] = uVar7;
      puVar3[0xf] = uVar6;
      puVar3[0xe] = uVar5;
      uVar5 = param_6[0x10];
      puVar3[0x11] = param_6[0x11];
      puVar3[0x10] = uVar5;
      puVar3[0x12] = 0;
      *puVar1 = FUN_18001ddb8;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar3 + 0x12
      ;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_18001dd98;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar4 + 0x12c0));
  }
  plVar2 = *(longlong **)(lVar4 + 0x14a0);
  *plVar2 = (longlong)param_6;
  plVar2[1] = param_1;
  *(undefined4 *)(plVar2 + 2) = param_2;
  *(undefined4 *)((longlong)plVar2 + 0x14) = param_3;
  *(undefined4 *)(plVar2 + 3) = param_4;
  *(undefined4 *)((longlong)plVar2 + 0x1c) = param_5;
  *(undefined4 *)(plVar2 + 4) = param_7;
  FUN_18001ddb8(plVar2);
LAB_18001dd98:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

