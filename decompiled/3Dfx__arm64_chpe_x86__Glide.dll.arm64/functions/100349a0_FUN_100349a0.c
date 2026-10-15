/*
 * FUN_100349a0 at 100349a0
 * undefined FUN_100349a0(void)
 * Address ranges: 100349a0-10034daf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100349a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  code *extraout_w11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_c8;
  float local_c4;
  float fStack_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [16];
  ulonglong local_70;
  uint local_68;
  undefined4 local_5c;
  undefined4 uStack_58;
  
  uVar11 = *param_2;
  fVar17 = (float)param_2[8];
  fVar16 = (float)param_2[10];
  fVar15 = (float)param_2[9];
  fVar14 = (float)param_2[0xb];
  uVar4 = *(uint *)(*(int *)(param_1 + 8) + 0x28);
  uVar5 = *(uint *)(*(int *)(param_1 + 8) + 0x2c);
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x138);
  uVar7 = *(uint *)(*(int *)(iVar6 + 4) + 0x9e);
  uVar10 = param_2[2];
  local_c8 = param_2[1];
  iVar8 = *(int *)(iVar6 + 0x3180);
  iVar6 = iVar8 + *(int *)(iVar6 + 0x3184) * 0x16c0;
  piVar3 = (int *)(iVar6 + 0x19c4);
  *(int *)(*piVar3 + 0x634) = *(int *)(*piVar3 + 0x634) + 1;
  *(undefined8 *)(iVar6 + 0x750) = *(undefined8 *)(*piVar3 + 0x938);
  FUN_100587a0(*(int *)(iVar6 + 0x6c8) + 0x38,local_b8,2,
               *(undefined4 *)(*(int *)(iVar6 + 0x19c0) + 0xc));
  iVar9 = (int)local_b0;
  if ((int)local_b0 != 0) {
    fStack_c0 = fVar17 * 0.0 + fVar16;
    local_c4 = fVar15 * 0.0 + fVar14;
    *(int *)(*piVar3 + 0x948) = iVar8;
    fVar13 = (float)uVar7;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar11,auStack_80);
    *(undefined4 *)(iVar6 + 0x708) = 1;
    *(undefined4 *)(iVar6 + 0x70c) = uVar10;
    *(undefined4 *)(iVar6 + 0x730) = local_5c;
    *(undefined4 *)(iVar6 + 0x734) = uStack_58;
    uVar10 = FUN_10022800(iVar6 + 0x1cc0,&DAT_10097d80);
    *(undefined4 *)(iVar6 + 0x6ec) = uVar10;
    uVar10 = FUN_10022e50(iVar6 + 0x1cb0,0x10097bc8);
    *(undefined4 *)(iVar6 + 0x6f8) = uVar10;
    uVar10 = FUN_10022b58(iVar6 + 0x1ce0,0x10097d48);
    *(undefined4 *)(iVar6 + 0x6f4) = uVar10;
    piVar1 = (int *)(*(int *)(iVar6 + 0x6c8) + 0x2c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    FUN_10060618(*piVar3,uVar11,0,0,4);
    iVar8 = *piVar3;
    puVar2 = (undefined4 *)(iVar6 + 0x6d0);
    FUN_10059a28(*(undefined4 *)(iVar8 + 0x8e4),*puVar2,*(undefined4 *)(iVar8 + 0x8e0),iVar8,
                 *(undefined8 *)(iVar8 + 0x938));
    FUN_10060e80(*piVar3,*puVar2);
    FUN_10061070(*piVar3,5);
    local_b0 = 0x1000000200;
    FUN_100617a0(*piVar3,0,1,local_b8);
    *(undefined4 *)(iVar6 + 0x6d8) = *(undefined4 *)(iVar6 + 0x1854);
    *(undefined4 *)(iVar6 + 0x6d4) = *(undefined4 *)(iVar6 + 0x1860);
    *(undefined4 *)(iVar6 + 0x6fc) = *(undefined4 *)(iVar6 + 0x1868);
    uVar11 = FUN_100570d0(iVar6 + 0x1d00,puVar2);
    FUN_10060fe0(*piVar3,uVar11);
    iVar6 = *piVar3;
    FUN_10059a28(*(undefined4 *)(iVar6 + 0x8e4),uVar11,*(undefined4 *)(iVar6 + 0x8e0),iVar6,
                 *(undefined8 *)(iVar6 + 0x938));
    FUN_10061b20(*piVar3,1,&local_c8,0,0);
    local_98 = 0;
    local_88 = 0;
    local_a8 = 0;
    local_90 = (float)(local_70 & 0xffffffff);
    fStack_8c = (float)local_68;
    local_a0 = (undefined4)local_70;
    uStack_9c = local_68;
    local_84 = 0x3f800000;
    FUN_10061f60(*piVar3,1,&local_98);
    uVar12 = FUN_10061e30(*piVar3,1,&local_a8);
    FUN_1006ab08(fStack_c0,local_c4,(float)uVar4 * fVar17 + fVar16,(float)uVar5 * fVar15 + fVar14,
                 fVar13 * fVar17,fVar13 * fVar15,uVar12,iVar9,local_70 & 0xffffffff,local_68);
    FUN_10062490(*piVar3,10,1,0,0);
    FUN_10060580(*piVar3 + 4,0);
  }
  return;
}

