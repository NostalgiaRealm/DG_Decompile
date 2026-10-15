/*
 * FUN_1009ecf8 at 1009ecf8
 * undefined FUN_1009ecf8(void)
 * Address ranges: 1009ecf8-1009f11f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1009ecf8(undefined8 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint extraout_w11;
  uint uVar11;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  uint uStack_94;
  undefined4 local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 *local_50;
  
  uVar10 = 0;
  do {
    if (param_4 == -1) {
      uVar11 = uVar10 | 0x410200;
    }
    else {
      uVar11 = uVar10 | param_4 << 0xe | 0x420300;
    }
    iVar9 = uVar10 * 4;
    uVar10 = uVar10 + 1;
    *(uint *)(param_2 + 0x1ac + iVar9) = uVar11;
  } while (uVar10 < 0xf);
  piVar2 = (int *)(param_2 + 0x10);
  bVar3 = *(byte *)(*piVar2 + 0x4a6c);
  if (bVar3 != 0 && bVar3 < 3 || bVar3 == 3) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar3) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
      uVar5 = FUN_10121590(param_2 + 0x18,4,1);
      *(undefined4 *)(param_2 + 0x1e8) = uVar5;
      *(undefined4 *)(param_2 + 0x1ec) = *(undefined4 *)(param_2 + 0x1bc);
      *(undefined4 *)(param_2 + 0x1f0) = *(undefined4 *)(param_2 + 0x1bc);
      *(undefined4 *)(param_2 + 500) = *(undefined4 *)(param_2 + 0x1b4);
      *(undefined4 *)(param_2 + 0x1f8) = *(undefined4 *)(param_2 + 0x1b8);
      uVar10 = 0;
      do {
        iVar9 = uVar10 * 4;
        iVar1 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(param_2 + 0x1fc + iVar1) = *(undefined4 *)(param_2 + 0x1c0 + iVar9);
      } while (uVar10 < 8);
      break;
    case 2:
      uVar8 = FUN_10121590(param_2 + 0x18,4,1);
      *(int *)(param_2 + 0x1e8) = (int)uVar8;
      if (((uint)(int)*(char *)(*piVar2 + 0x444) >> 7 & 1) == 0) {
        uVar5 = *(undefined4 *)(param_2 + 0x1b4);
      }
      else {
        uVar5 = FUN_10095d20(uVar8,param_2,param_3,2);
      }
      *(undefined4 *)(param_2 + 500) = uVar5;
      if (((uint)(int)*(char *)(*piVar2 + 0x445) >> 7 & 1) == 0) {
        uVar5 = *(undefined4 *)(param_2 + 0x1b8);
      }
      else {
        uVar5 = FUN_10095d20(uVar5,param_2,param_3,3);
      }
      *(undefined4 *)(param_2 + 0x1f8) = uVar5;
      if ((char)(*(byte *)(*piVar2 + 0x443) | *(byte *)(*piVar2 + 0x442)) < '\0') {
        uVar5 = FUN_10095d20(uVar5,param_2,param_3,4);
      }
      else {
        uVar5 = *(undefined4 *)(param_2 + 0x1bc);
      }
      *(undefined4 *)(param_2 + 0x1ec) = uVar5;
      *(undefined4 *)(param_2 + 0x1f0) = uVar5;
      uVar10 = 0;
      do {
        iVar9 = uVar10 * 4;
        if (((uint)(int)*(char *)(*piVar2 + uVar10 + 0x446) >> 7 & 1) == 0) {
          uVar5 = *(undefined4 *)(iVar9 + param_2 + 0x1c0);
        }
        else {
          uVar5 = FUN_10095d20(uVar5,param_2,param_3,uVar10 + 5);
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)(param_2 + 0x1fc + iVar9) = uVar5;
      } while (uVar10 < 8);
      break;
    case 3:
      local_50 = (undefined8 *)(param_2 + 0x26c);
      *(undefined8 *)(param_2 + 0x274) = 0;
      *local_50 = 0;
      *(undefined8 *)(param_2 + 0x284) = 0;
      *(undefined8 *)(param_2 + 0x27c) = 0;
      *(undefined8 *)(param_2 + 0x294) = 0;
      *(undefined8 *)(param_2 + 0x28c) = 0;
      *(undefined4 *)(param_2 + 0x29c) = 0;
      if (*(char *)(*piVar2 + 0x4885) != '\0' && param_4 == -1) {
        piVar2 = (int *)(param_2 + 0x60);
        param_4 = *piVar2;
        *(undefined4 *)(param_2 + param_4 * 4 + 0x50) = 0xd;
        *piVar2 = *piVar2 + 1;
      }
      uVar8 = 0xf;
      uVar10 = 0;
      do {
        cVar4 = *(char *)(*(int *)(param_2 + 0x14) + uVar10);
        uVar11 = (uint)cVar4;
        if (cVar4 < -1) {
LAB_1009f03c:
          if (-1 < (int)uVar11) {
            iVar9 = param_2 + 0x18;
            if ((int)uVar11 < 1) goto LAB_1009efe0;
            if (param_4 == -1) {
              uVar8 = FUN_10121590(iVar9,4,1);
              uVar6 = (uint)uVar8;
            }
            else {
              uVar6 = uVar11 | param_4 << 0xe | 0x420300;
            }
            *(uint *)(param_2 + uVar11 * 4 + 0x26c) = uVar6;
            puVar7 = (uint *)FUN_10095628(uVar8,uVar11);
            uStack_84 = *puVar7;
            local_78 = puVar7[3];
            uStack_7c = puVar7[2];
            uStack_8c = *(uint *)(param_2 + 0xac);
            local_a0 = iVar9;
            uStack_9c = param_3;
            if (*(uint *)(param_2 + 0x21c) == 0) {
              uStack_74 = 0;
              local_88 = 0xe4;
              local_90 = 0xf;
              local_98 = 0x36;
              uStack_94 = extraout_w11;
              local_80 = puVar7[1];
              uVar8 = FUN_10122a88(&local_a0,0x30);
            }
            else {
              uStack_6c = 0;
              uStack_94 = extraout_w11 | 0x40000000;
              local_90 = 0xf;
              local_98 = 0x36;
              local_80 = 0xe4;
              local_88 = (uint)*(byte *)(param_2 + 0x220);
              uVar11 = uStack_8c;
              uStack_8c = *(uint *)(param_2 + 0x21c) | 0x10000000;
              uVar6 = uStack_84;
              uStack_84 = uVar11;
              uStack_74 = uStack_7c;
              uStack_7c = uVar6;
              local_70 = local_78;
              local_78 = puVar7[1];
              uVar8 = FUN_10122a88(&local_a0,0x38);
            }
          }
        }
        else {
          if (-1 < (int)uVar11) {
            uVar11 = uVar11 + 2;
            goto LAB_1009f03c;
          }
LAB_1009efe0:
          uVar8 = FUN_10121590(param_2 + 0x18,4,1);
          *(int *)local_50 = (int)uVar8;
          uVar11 = 0;
          if (param_4 != -1) {
            uVar11 = param_4 << 0xe | 0x420300;
          }
          *(uint *)(param_2 + 0x268) = uVar11;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < 0xc);
    }
  }
  return;
}

