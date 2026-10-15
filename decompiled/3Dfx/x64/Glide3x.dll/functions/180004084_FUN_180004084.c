/*
 * FUN_180004084 at 180004084
 * ulonglong __fastcall FUN_180004084(longlong param_1, char param_2)
 * Address ranges: 180004084-18000416c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180004084(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  BOOL BVar7;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x3c0));
    BVar7 = CloseHandle(*(HANDLE *)(param_1 + 0x3c8));
    in_RAX = CONCAT44(extraout_var,BVar7);
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    if (param_2 != '\0') {
      lVar10 = 4;
      puVar5 = (undefined8 *)(param_1 + 0x5dc);
      puVar6 = (undefined8 *)(param_1 + 0x3d0);
      do {
        puVar9 = puVar6;
        puVar8 = puVar5;
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *puVar8 = *puVar9;
        puVar8[1] = uVar1;
        uVar1 = puVar9[4];
        uVar4 = puVar9[5];
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        uVar2 = puVar9[6];
        uVar3 = puVar9[7];
        puVar8[4] = uVar1;
        puVar8[5] = uVar4;
        uVar1 = puVar9[8];
        uVar4 = puVar9[9];
        puVar8[6] = uVar2;
        puVar8[7] = uVar3;
        uVar2 = puVar9[10];
        uVar3 = puVar9[0xb];
        puVar8[8] = uVar1;
        puVar8[9] = uVar4;
        uVar1 = puVar9[0xc];
        uVar4 = puVar9[0xd];
        puVar8[10] = uVar2;
        puVar8[0xb] = uVar3;
        uVar2 = puVar9[0xe];
        uVar3 = puVar9[0xf];
        puVar8[0xc] = uVar1;
        puVar8[0xd] = uVar4;
        puVar8[0xe] = uVar2;
        puVar8[0xf] = uVar3;
        lVar10 = lVar10 + -1;
        puVar5 = puVar8 + 0x10;
        puVar6 = puVar9 + 0x10;
      } while (lVar10 != 0);
      uVar1 = *(undefined8 *)((longlong)puVar9 + 0x7c);
      uVar2 = *(undefined8 *)((longlong)puVar9 + 0x84);
      *(undefined1 *)(param_1 + 0x7e9) = 1;
      *(undefined8 *)((longlong)puVar8 + 0x7c) = uVar1;
      *(undefined8 *)((longlong)puVar8 + 0x84) = uVar2;
      return CONCAT71((int7)((ulonglong)(puVar8 + 0x10) >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

