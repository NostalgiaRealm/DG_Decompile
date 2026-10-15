/*
 * FUN_18007ed88 at 18007ed88
 * undefined __fastcall FUN_18007ed88(longlong * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 18007ed88-1800800fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007ed88(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 uVar13;
  int iVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  uint local_res20;
  uint uVar19;
  undefined4 in_stack_ffffffffffffff4c;
  uint uVar20;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 uVar21;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar23;
  undefined8 uVar22;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar25;
  undefined8 uVar24;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar27;
  undefined8 uVar26;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar29;
  undefined8 uVar28;
  uint local_64;
  uint local_5c;
  
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar27 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar29 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar9 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
  uVar3 = (**(code **)*param_1)();
  uVar4 = uVar3;
  if ((uVar9 >> 0x15 & 1) != 0) {
    puVar12 = (uint *)(param_3 + 0x20);
    uVar4 = FUN_1800ec8c0((longlong)puVar12,4,'\x01');
    uVar10 = (ulonglong)uVar4;
    if ((*(uint *)(param_3 + 0x1ac) & 0x10000) == 0) {
      uVar23 = 0;
      FUN_1800edbe0(puVar12,param_2,0x32,uVar10);
    }
    else {
      uVar5 = (**(code **)*param_1)(param_1,param_2,param_3,0xf,0xf);
      uVar27 = 0;
      FUN_1800edbe0(puVar12,param_2,0,uVar10);
      uVar23 = 0;
      FUN_1800edbe0(puVar12,param_2,0x32,uVar10);
      (**(code **)(*param_1 + 8))(param_1,param_3,uVar5);
    }
    if (uVar3 != uVar4) {
      (**(code **)(*param_1 + 8))(param_1,param_3,uVar3);
    }
  }
  uVar20 = *(uint *)(param_3 + 0x1ac);
  iVar16 = 2;
  if ((uVar20 >> 0xf & 1) == 0) {
    local_64 = 0;
  }
  else {
    if ((uVar20 >> 0xb & 1) == 0) {
      iVar14 = 1;
      uVar13 = 1;
    }
    else {
      iVar14 = 2;
      uVar13 = 3;
      iVar16 = 3;
    }
    if ((uVar20 >> 0xc & 1) != 0) {
      uVar13 = 7;
      iVar14 = iVar16;
    }
    if ((uVar20 >> 0xd & 1) != 0) {
      iVar14 = iVar14 + 1;
      uVar13 = 0xf;
    }
    puVar12 = (uint *)(param_3 + 0x20);
    local_64 = FUN_1800ec8c0((longlong)puVar12,iVar14,'\x01');
    uVar5 = (**(code **)*param_1)(param_1,param_2,param_3,2,uVar13);
    uVar27 = 0;
    FUN_1800edbe0(puVar12,param_2,0x24,(ulonglong)local_64);
    FUN_1800edbe0(puVar12,param_2,0x25,(ulonglong)local_64);
    uVar29 = 0;
    FUN_1800edbe0(puVar12,param_2,0x29,(ulonglong)local_64);
    (**(code **)(*param_1 + 8))(param_1,param_3,uVar5);
  }
  puVar12 = (uint *)(param_3 + 0x20);
  uVar6 = FUN_1800ec8c0((longlong)puVar12,4,'\x01');
  uVar20 = uVar4;
  if ((*(uint *)(param_3 + 0x1ac) & 0xf800) == 0) {
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar6);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar6);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar6);
    uVar28 = 0;
    uVar26 = CONCAT44(uVar27,0x120);
    uVar24 = CONCAT44(uVar25,0xe4);
    uVar22 = CONCAT44(uVar23,*(undefined4 *)(param_3 + 0xd0));
    uVar21 = CONCAT44(uVar8,0xe4);
    uVar19 = 8;
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar6);
  }
  else {
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar6);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar6);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar6);
    uVar28 = CONCAT44(uVar29,-(uint)(local_64 != 0) & 0x10000000 | local_64);
    uVar26 = CONCAT44(uVar27,0x30);
    uVar24 = CONCAT44(uVar25,0xe4);
    uVar22 = CONCAT44(uVar23,-(uint)(local_64 != 0) & 0x40000000 | *(uint *)(param_3 + 0xe0));
    uVar21 = CONCAT44(uVar8,0xe4);
    uVar19 = 8;
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar6);
  }
  uVar17 = 0;
  local_res20 = 0;
  uVar7 = *(uint *)(param_3 + 0x1ac) & 0x800;
  bVar18 = uVar7 != 0;
  if ((*(uint *)(param_3 + 0x1ac) >> 0xc & 1) != 0) {
    bVar18 = (uVar7 != 0) + 2;
  }
  bVar15 = bVar18 | 4;
  if ((*(uint *)(param_3 + 0x1ac) & 0x2000) == 0) {
    bVar15 = bVar18;
  }
  if (bVar15 == 0) {
    uVar8 = 0;
  }
  else {
    uVar19 = CONCAT31((int3)(uVar19 >> 8),bVar15);
    uVar8 = (**(code **)*param_1)
                      (param_1,param_2,param_3,1,uVar19,uVar20,uVar21,uVar22,uVar24,uVar26,uVar28);
  }
  if ((*(uint *)(param_3 + 0x1ac) & 0x800) != 0) {
    local_res20 = FUN_1800ec8c0((longlong)puVar12,1,'\x01');
    uVar17 = FUN_1800ec8c0((longlong)puVar12,4,'\x01');
    FUN_1800edbe0(puVar12,param_2,0x38,(ulonglong)uVar6);
    FUN_1800edbe0(puVar12,param_2,0,(ulonglong)local_res20);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    if ((*(uint *)(param_3 + 0x1ac) & 0x1000) == 0) {
      uVar19 = 0xf;
      FUN_1800edbe0(puVar12,param_2,0x32,(ulonglong)uVar6);
    }
    else {
      uVar19 = 0xf;
      FUN_1800edbe0(puVar12,param_2,0x32,(ulonglong)uVar6);
    }
  }
  if ((*(uint *)(param_3 + 0x1ac) & 0x1000) != 0) {
    FUN_1800edbe0(puVar12,param_2,0,(ulonglong)local_res20);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    uVar19 = 0xf;
    FUN_1800edbe0(puVar12,param_2,0x32,(ulonglong)uVar6);
  }
  if ((*(uint *)(param_3 + 0x1ac) & 0x2000) != 0) {
    FUN_1800edbe0(puVar12,param_2,0,(ulonglong)local_res20);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    FUN_1800edbe0(puVar12,param_2,0x11,(ulonglong)uVar17);
    uVar19 = 0xf;
    FUN_1800edbe0(puVar12,param_2,0x32,(ulonglong)uVar6);
  }
  if (uVar3 == uVar4) {
    (**(code **)(*param_1 + 8))(param_1,param_3);
  }
  else {
    FUN_1800ec960((longlong)puVar12,uVar4);
  }
  *(uint *)(param_3 + 0x15c) = uVar6;
  FUN_1800ec960((longlong)puVar12,uVar17);
  if ((*(char *)(param_3 + 0x1c2) != '\0') || (*(char *)(param_3 + 0x1c4) != '\0')) {
    if ((*(byte *)(param_3 + 0x1ac) & 4) == 0) {
      local_5c = 0;
    }
    else {
      local_5c = *(uint *)(param_3 + 0x1a0);
      if (local_5c == 0) {
        local_5c = (**(code **)*param_1)(param_1,param_2,param_3,3,0xf);
        *(uint *)(param_3 + 0x1a0) = local_5c;
      }
    }
    uVar10 = FUN_18007e784(param_1,param_2,param_3,local_5c,(uVar9 >> 0x15 & 1) != 0);
    uVar9 = (uint)uVar10;
    if (uVar9 != local_5c) {
      pbVar1 = (byte *)(param_3 + 0x1c0);
      *pbVar1 = *pbVar1 & 0xf7;
      if ((*pbVar1 == 0) && (*(int *)(param_3 + 0x1a0) != 0)) {
        (**(code **)(*param_1 + 8))(param_1);
        *(undefined4 *)(param_3 + 0x1a0) = 0;
      }
    }
    cVar2 = *(char *)(param_3 + 0x1c4);
    puVar11 = puVar12;
    uVar4 = FUN_1800ec8c0((longlong)puVar12,(cVar2 != '\0') + 3,'\x01');
    iVar16 = 0x4000;
    if ((*(uint *)(param_3 + 0x1ac) & 0xf800) != 0) {
      puVar11 = (uint *)(ulonglong)*(uint *)(param_3 + 0xe0);
    }
    uVar19 = uVar9;
    FUN_18007e978(puVar11,param_2,param_3,(ulonglong)uVar4,uVar9);
    if ((*(uint *)(param_3 + 0x1ac) & 0x800) != 0) {
      uVar17 = FUN_1800ec8c0((longlong)puVar12,3,'\x01');
      iVar16 = (-(uint)(local_64 != 0) & 0xffffffc0) + 0x4040;
      puVar11 = puVar12;
      FUN_1800edbe0(puVar12,param_2,0x38,(ulonglong)uVar4);
      FUN_18007e978(puVar11,param_2,param_3,(ulonglong)uVar17,uVar9);
      uVar19 = 7;
      FUN_1800edbe0(puVar12,param_2,0x32,(ulonglong)uVar4);
    }
    if ((*(uint *)(param_3 + 0x1ac) & 0x1000) != 0) {
      uVar3 = ~-(uint)(local_64 != 0) & 0x40;
      iVar16 = iVar16 + uVar3;
      FUN_18007e978((ulonglong)uVar3,param_2,param_3,(ulonglong)uVar17,uVar9);
      uVar19 = 7;
      FUN_1800edbe0(puVar12,param_2,0x32,(ulonglong)uVar4);
    }
    if ((*(uint *)(param_3 + 0x1ac) & 0x2000) != 0) {
      FUN_18007e978((ulonglong)((~-(uint)(local_64 != 0) & 0x40) + iVar16),param_2,param_3,
                    (ulonglong)uVar17,uVar9);
      uVar19 = 7;
      FUN_1800edbe0(puVar12,param_2,0x32,(ulonglong)uVar4);
    }
    if (uVar9 == local_5c) {
      pbVar1 = (byte *)(param_3 + 0x1c0);
      *pbVar1 = *pbVar1 & 0xf7;
      if ((*pbVar1 == 0) && (*(int *)(param_3 + 0x1a0) != 0)) {
        (**(code **)(*param_1 + 8))(param_1,param_3);
        *(undefined4 *)(param_3 + 0x1a0) = 0;
      }
    }
    else {
      FUN_1800ec960((longlong)puVar12,uVar9);
    }
    *(uint *)(param_3 + 0x160) = uVar4;
    if (cVar2 != '\0') {
      uVar19 = 8;
      FUN_1800edbe0(puVar12,param_2,0x36,(ulonglong)uVar4);
    }
    FUN_1800ec960((longlong)puVar12,uVar17);
  }
  (**(code **)(*param_1 + 8))(param_1,param_3,uVar8);
  FUN_1800ec960((longlong)puVar12,local_64);
  FUN_1800ec960((longlong)puVar12,local_res20);
  if (((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x800000) != 0) &&
     (*(uint *)(param_3 + 0x160) != 0)) {
    FUN_18007eb88(puVar12,param_2,param_3,*(uint *)(param_3 + 0x160),
                  CONCAT44(in_stack_ffffffffffffff4c,uVar19),0,0);
  }
  return;
}

