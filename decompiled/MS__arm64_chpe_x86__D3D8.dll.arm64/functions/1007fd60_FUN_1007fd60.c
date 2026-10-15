/*
 * FUN_1007fd60 at 1007fd60
 * undefined FUN_1007fd60(void)
 * Address ranges: 1007fd60-1007ff6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1007fd60(undefined8 param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  ulonglong local_a0;
  longlong lStack_98;
  uint local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined2 local_8a;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_a0 = 0x4e475349;
  lStack_98 = 0x800000000;
  local_a8 = 0x210;
  local_a4 = 1;
  local_b0 = FUN_100fece0(0x210);
  iStack_ac = local_b0;
  FUN_100ef6d8(&local_b0,&local_a0,0x10);
  iVar13 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar12 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  do {
    pcVar3 = (char *)(uVar12 + param_3[4]);
    if ((pcVar3[0x10] != '\0') && (cVar5 = *pcVar3, cVar5 != -1)) {
      iVar4 = *param_3;
      uVar10 = 0;
      uVar11 = 0xffffffff;
      if (*(uint *)(iVar4 + 8) != 0) {
        do {
          uVar11 = (uint)*(byte *)(iVar4 + 0x9c + uVar10);
          if (*(char *)(iVar4 + 0x19 + uVar11 * 8) == cVar5) break;
          uVar10 = uVar10 + 1;
          uVar11 = 0xffffffff;
        } while (uVar10 < *(uint *)(iVar4 + 8));
      }
      puVar1 = (undefined1 *)((int)param_3 + uVar12 + 0xda);
      puVar2 = (undefined1 *)((int)param_3 + uVar12 + 0xca);
      if (uVar11 == 0xffffffff) {
        *puVar1 = 0xff;
        *puVar2 = 0xff;
        goto LAB_1007ff18;
      }
      iVar4 = iVar4 + uVar11 * 8;
      local_a0 = (ulonglong)CONCAT14(cVar5,(undefined4)local_a0) & 0xfffffffff;
      uVar6 = *(undefined1 *)(iVar4 + 0x1a);
      uVar7 = *(undefined1 *)(iVar4 + 0x18);
      *puVar1 = uVar6;
      *puVar2 = uVar7;
      local_90 = uVar12 & 0xff;
      switch(uVar6) {
      default:
        uVar10 = 3;
        break;
      case 2:
        uVar8 = 1;
        goto LAB_1007fec0;
      case 3:
      case 4:
        uVar10 = 2;
      }
      uVar8 = (ulonglong)uVar10;
LAB_1007fec0:
      lStack_98 = uVar8 << 0x20;
      local_8a = 0;
      local_8c = 0xf;
      puVar1 = (undefined1 *)(param_3[4] + uVar12);
      local_8b = puVar1[0x10];
      uVar9 = FUN_100837d8(*puVar1);
      uVar9 = FUN_100ef818(&local_80,uVar9);
      local_a0 = CONCAT44(local_a0._4_4_,uVar9);
      iVar13 = iVar13 + 1;
      FUN_100ef6d8(&local_b0,&local_a0,0x18);
    }
LAB_1007ff18:
    uVar12 = uVar12 + 1;
    if (0xf < uVar12) {
      FUN_100efb68(&local_b0,iVar13,&local_80);
      iVar13 = local_b0;
      FUN_100ef6d8(param_2,local_b0,iStack_ac - local_b0);
      FUN_100fed00(iVar13);
      return 1;
    }
  } while( true );
}

