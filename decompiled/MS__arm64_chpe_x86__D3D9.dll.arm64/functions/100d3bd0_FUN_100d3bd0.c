/*
 * FUN_100d3bd0 at 100d3bd0
 * undefined FUN_100d3bd0(void)
 * Address ranges: 100d3bd0-100d405b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined1 FUN_100d3bd0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint unaff_1000007f;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  
  if ((*(char *)(param_1 + 0xc2ed) == '\0') && (param_2 == *(uint *)(param_1 + 0xc2e4))) {
    return *(undefined1 *)(param_1 + 0xc2e8);
  }
  piVar1 = (int *)(param_1 + 0x18);
  iVar3 = *piVar1;
  bVar8 = true;
  uVar2 = *(uint *)(*(int *)(iVar3 + 4) + 0xb8) & 1;
  if ((param_2 & 1) != 0) {
    uVar11 = 1;
    do {
      if (3 < uVar11) break;
      iVar4 = *(int *)(param_1 + uVar11 * 4 + 0x18);
      if (iVar4 != 0) {
        if ((((*(int *)(iVar4 + 0x40) != *(int *)(iVar3 + 0x40)) ||
             (*(int *)(iVar4 + 0x44) != *(int *)(iVar3 + 0x44))) ||
            (*(int *)(iVar4 + 0x38) != *(int *)(iVar3 + 0x38))) ||
           (*(int *)(iVar4 + 0x3c) != *(int *)(iVar3 + 0x3c))) {
          bVar8 = false;
        }
        if ((*(uint *)(*(int *)(iVar4 + 4) + 0xb8) & 1) != uVar2) {
          bVar8 = false;
        }
      }
      uVar11 = uVar11 + 1;
    } while (bVar8);
  }
  uVar11 = unaff_1000007f;
  if (param_2 == 3) {
    uVar9 = 0;
    if (!bVar8) goto LAB_100d3f54;
    iVar4 = *(int *)(param_1 + 0x28);
    uVar11 = param_2;
    if (iVar4 != 0) {
      uVar5 = *(uint *)(iVar3 + 0x40);
      if ((*(uint *)(iVar4 + 0x40) < uVar5) ||
         (uVar6 = *(uint *)(iVar3 + 0x44), *(uint *)(iVar4 + 0x44) < uVar6)) {
        bVar8 = false;
        uVar11 = unaff_1000007f;
      }
      else if (((uVar5 < (uint)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x2c))) ||
               (uVar11 = unaff_1000007f,
               uVar6 < (uint)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x30)))) &&
              (uVar11 = unaff_1000007f, uVar5 < 3 && uVar6 < 3)) {
        param_2 = 2;
        uVar11 = 2;
      }
      if ((*(uint *)(*(int *)(iVar4 + 4) + 0xb8) & 1) != uVar2) {
        uVar9 = 0;
        goto LAB_100d3f54;
      }
      goto LAB_100d3dac;
    }
LAB_100d3dc0:
    switch((&UINT_100d405c)[uVar11 - 1] * 4 + 0x100d3e54) {
    case 0x100d3dd8:
      uVar9 = FUN_10026300(param_1,piVar1,0,0);
      iVar4 = *(int *)(param_1 + 0x1c);
      iVar7 = *(int *)(param_1 + 0x20);
      iVar3 = *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0xc270) = *piVar1;
      *(int *)(param_1 + 0xc274) = iVar4;
      *(int *)(param_1 + 0xc278) = iVar7;
      *(int *)(param_1 + 0xc27c) = iVar3;
      *(undefined4 *)(param_1 + 0xc280) = 0;
      if (((*(int *)(*piVar1 + 0x88) != 0) || ((iVar4 != 0 && (*(int *)(iVar4 + 0x88) != 0)))) ||
         ((iVar7 != 0 && (*(int *)(iVar7 + 0x88) != 0)))) goto LAB_100d3f40;
      break;
    case 0x100d3e54:
      iVar4 = *(int *)(param_1 + 0x28);
      if (((((uint)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x2c)) <= *(uint *)(iVar3 + 0x40))
           && ((uint)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x30)) <=
               *(uint *)(iVar3 + 0x44))) && (*(int *)(iVar4 + 0x38) == *(int *)(iVar3 + 0x38))) &&
         (*(int *)(iVar4 + 0x3c) == *(int *)(iVar3 + 0x3c))) goto switchD_100d3dd4_caseD_100d3f88;
      uVar9 = FUN_10026300(param_1,piVar1,iVar4,1);
      *(undefined8 *)(param_1 + 0xc270) = 0;
      *(undefined8 *)(param_1 + 0xc278) = 0;
      iVar3 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0xc280) = iVar3;
      if ((*(int *)(*(int *)(iVar3 + 4) + 0x60) != -1) && (*(int *)(iVar3 + 0x88) != 0)) {
        *(undefined1 *)(*(int *)(iVar3 + 0x88) + 0x32) = 1;
      }
      goto LAB_100d3f2c;
    case 0x100d3f88:
      goto switchD_100d3dd4_caseD_100d3f88;
    case 0x700d3d40:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
joined_r0x100d3f30:
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x88) != 0)) goto LAB_100d3f40;
    bVar10 = 0;
    param_2 = uVar11;
  }
  else {
LAB_100d3dac:
    uVar9 = 0;
    if (!bVar8) goto LAB_100d3f54;
    if ((param_2 != 0) && (uVar11 < 4)) goto LAB_100d3dc0;
switchD_100d3dd4_caseD_100d3f88:
    uVar9 = FUN_10026300(param_1,piVar1,*(int *)(param_1 + 0x28),0);
    *(int *)(param_1 + 0xc270) = *piVar1;
    *(undefined4 *)(param_1 + 0xc274) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0xc278) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0xc27c) = *(undefined4 *)(param_1 + 0x24);
    iVar3 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0xc280) = iVar3;
    if (((iVar3 != 0) && (*(int *)(*(int *)(iVar3 + 4) + 0x60) != -1)) &&
       (*(int *)(iVar3 + 0x88) != 0)) {
      *(undefined1 *)(*(int *)(iVar3 + 0x88) + 0x32) = 1;
    }
    if ((((*(int *)(*(int *)(param_1 + 0xc270) + 0x88) == 0) &&
         ((*(int *)(param_1 + 0xc274) == 0 || (*(int *)(*(int *)(param_1 + 0xc274) + 0x88) == 0))))
        && ((*(int *)(param_1 + 0xc278) == 0 || (*(int *)(*(int *)(param_1 + 0xc278) + 0x88) == 0)))
        ) && ((*(int *)(param_1 + 0xc27c) == 0 || (*(int *)(*(int *)(param_1 + 0xc27c) + 0x88) == 0)
              ))) {
LAB_100d3f2c:
      iVar3 = *(int *)(param_1 + 0xc280);
      goto joined_r0x100d3f30;
    }
LAB_100d3f40:
    bVar10 = 1;
    param_2 = uVar11;
  }
  *(byte *)(param_1 + 0xcc4) = bVar10 | *(byte *)(param_1 + 0xcc4);
LAB_100d3f54:
  *(undefined1 *)(param_1 + 0xc2e8) = uVar9;
  *(uint *)(param_1 + 0xc2e4) = param_2;
  *(undefined1 *)(param_1 + 0xc2ed) = 0;
  return uVar9;
}

