/*
 * FUN_1006a806 at 1006a806
 * uint * __thiscall FUN_1006a806(void * this, uint * param_1, int param_2, int * param_3, undefined1 * param_4)
 * Address ranges: 1006a806-1006b964
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall
FUN_1006a806(void *this,uint *param_1,int param_2,int *param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  uint local_c0;
  byte local_bc;
  uint local_b0;
  undefined1 local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_84;
  uint local_80;
  undefined1 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_50;
  byte local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_24;
  int *local_20;
  void *local_1c;
  uint *local_18;
  byte local_11;
  
  local_20 = (int *)*param_1;
  local_18 = param_1 + 1;
  uVar4 = (uint)local_20 & 0xffff;
  local_1c = this;
  if (uVar4 < 0x27) {
    if (uVar4 == 0x26) {
LAB_1006b1aa:
      if (3 < *(uint *)(param_2 + 0x2d8)) {
        return param_1;
      }
      local_1c = *(void **)(param_2 + 0x2a0 + *(uint *)(param_2 + 0x2d8) * 4);
      local_24 = (int *)(*(int *)(param_2 + 0x2d8) + 1);
      *(int **)(param_2 + 0x2d8) = local_24;
      uVar5 = *local_18;
      if (uVar4 == 0x1b) {
        uVar5 = param_1[2];
        *(int **)(param_2 + 0x2dc) = local_24;
        param_1 = local_18;
      }
      if ((*(char *)(param_2 + 200) == '\0') ||
         (local_20 = *(int **)(param_2 + 0x10),
         *(char *)((int)local_20 + (uVar5 & 0x7ff) + 0x48c5) == '\0')) {
        local_18 = (uint *)(param_2 + 0x18);
        FUN_100c3be1((int *)local_18,param_3,0x25);
      }
      else {
        local_24 = (int *)0xff;
        if (local_20[(uVar5 & 0x7ff) * 4 + 0x1236] < 0xff) {
          local_24 = (int *)local_20[(uVar5 & 0x7ff) * 4 + 0x1236];
        }
        local_18 = (uint *)(param_2 + 0x18);
        FUN_100c3be1((int *)local_18,param_3,0x36);
      }
      FUN_100c3be1((int *)local_18,param_3,0x24);
      FUN_100c3be1((int *)local_18,param_3,0x30);
      uVar4 = 3;
      puVar3 = local_18;
    }
    else {
      if (0x1f < uVar4) {
        if (uVar4 == 0x20) {
          puVar3 = (uint *)FUN_10070ac1(local_18,0xf0000,2,0,param_2,param_3,'\0','\x01');
          piVar7 = (int *)(param_2 + 0x18);
          local_80 = FUN_100c2e34((int)piVar7,4,'\0');
          local_50 = *(uint *)(param_2 + 0xa8);
          local_24 = (int *)0x0;
          local_40 = 0;
          local_7c = 1;
          local_70 = 0xffffffff;
          local_6c = 0xffffffff;
          local_68 = 0xffffffff;
          local_64 = 0xffffffff;
          local_4c = 0;
          local_3c = 0xffffffff;
          local_38 = 0xffffffff;
          local_34 = 0xffffffff;
          FUN_100c3cfd(piVar7,param_3,0x2f);
          FUN_100c3cfd(piVar7,param_3,0x38);
          FUN_100c3cfd(piVar7,param_3,0x39);
          FUN_100c3cfd(piVar7,param_3,0x37);
          FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x19,
                       (uint *)(param_2 + 0x310),(uint *)0x100);
          return puVar3;
        }
        if (uVar4 == 0x21) {
          puVar3 = (uint *)FUN_10070ac1(local_18,0xf0000,2,0,param_2,param_3,'\0','\0');
          local_b0 = FUN_100c2e34(param_2 + 0x18,4,'\0');
          local_ac = 7;
          local_a0 = 0xffffffff;
          local_9c = 0xffffffff;
          local_98 = 0xffffffff;
          local_94 = 0xffffffff;
          FUN_100c4090(*(byte *)(param_2 + 0x3f4),0x52);
          FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x38);
          local_b0 = local_b0 | 0x80000000;
          FUN_100c4090(*(byte *)(param_2 + 0x3f4),0x52);
          bVar1 = FUN_100c4090(*(byte *)(param_2 + 0x3c4),9);
          FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x32,
                       (uint *)(param_2 + 0x310),(uint *)(bVar1 | 0x100));
          return puVar3;
        }
        if (uVar4 == 0x22) {
          puVar3 = (uint *)FUN_10070ac1(local_18,0xf0000,3,0,param_2,param_3,'\0','\x01');
          local_24 = (int *)(param_2 + 0x18);
          local_80 = FUN_100c2e34((int)local_24,4,'\x01');
          local_50 = *(uint *)(param_2 + 0xac);
          local_20 = (int *)0x0;
          local_40 = 0;
          local_18 = (uint *)0x0;
          local_3c = 0;
          local_1c = (void *)0x0;
          local_38 = 0;
          local_34 = 0;
          local_84 = param_2 + 0x3c0;
          local_7c = 0xf;
          local_70 = 0xffffffff;
          local_6c = 0xffffffff;
          local_68 = 0xffffffff;
          local_64 = 0xffffffff;
          local_4c = 0xe4;
          FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x31);
          local_80 = local_80 | 0x80000000;
          local_20 = (int *)(param_2 + 0x310);
          if (*(int *)(param_2 + 0x470) == 0) {
            local_b0 = FUN_100c2e34(param_2 + 0x18,4,'\0');
            piVar7 = local_24;
            local_a0 = 0xffffffff;
            local_9c = 0xffffffff;
            local_98 = 0xffffffff;
            local_94 = 0xffffffff;
            local_ac = 0xf;
            FUN_100c3cfd(local_24,param_3,0x31);
            FUN_100c3cfd(piVar7,param_3,0x1e);
            FUN_100c3cfd(piVar7,param_3,0x2b);
          }
          else {
            piVar7 = (int *)(param_2 + 0x18);
            FUN_100c3cfd(piVar7,param_3,0x2b);
          }
          FUN_100c2ed2((int)piVar7,local_80);
          return puVar3;
        }
        if (uVar4 == 0x23) {
          *(undefined4 *)(param_2 + 0x474) = 0;
          puVar3 = (uint *)FUN_10070ac1(local_18,0xf0000,1,0,param_2,param_3,'\0','\x01');
          FUN_10070b06(local_1c,param_2,param_3);
          return puVar3;
        }
        if (uVar4 == 0x24) {
          puVar3 = (uint *)FUN_10070ac1(local_18,0xf0000,1,0,param_2,param_3,'\0','\0');
          piVar7 = (int *)(param_2 + 0x18);
          local_80 = FUN_100c2e34((int)piVar7,4,'\0');
          local_7c = 1;
          local_70 = 0xffffffff;
          local_6c = 0xffffffff;
          local_68 = 0xffffffff;
          local_64 = 0xffffffff;
          FUN_100c4090(*(byte *)(param_2 + 0x3c4),0xa4);
          FUN_100c3cfd(piVar7,param_3,0x10);
          FUN_100c3cfd(piVar7,param_3,0x44);
          local_4c = 0xe4;
          local_40 = 0x7f800000;
          local_50 = *(uint *)(param_2 + 0xa8);
          local_3c = 0xffffffff;
          local_38 = 0xffffffff;
          local_34 = 0xffffffff;
          FUN_100c3cfd(piVar7,param_3,0x27);
          FUN_100c3cfd(piVar7,param_3,1);
          FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x38,
                       (uint *)(param_2 + 0x310),(uint *)0x100);
          return puVar3;
        }
        if (uVar4 == 0x25) {
          uVar4 = 3;
          if (*(char *)(*(int *)(param_2 + 0x10) + 0x4a6c) == '\x03') {
            uVar4 = 1;
          }
          puVar3 = (uint *)FUN_10070ac1(local_18,0xf0000,uVar4,0,param_2,param_3,'\0','\0');
          uVar4 = *local_18;
          local_18 = (uint *)(param_2 + 0x310);
          local_20 = (int *)(param_2 + 0x3c0);
          if ((uVar4 & 0xf0000) == 0x10000) {
            local_50 = *(uint *)(param_2 + 0xb0);
            puVar8 = &local_50;
            puVar6 = local_18;
          }
          else {
            if ((uVar4 & 0xf0000) != 0x20000) {
              if ((*local_18 >> 0x1e & 1) == 0) {
                FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x4d,
                             (uint *)0x102,local_18);
                return puVar3;
              }
              local_b0 = FUN_100c2e34(param_2 + 0x18,4,'\0');
              local_a0 = 0xffffffff;
              local_9c = 0xffffffff;
              local_98 = 0xffffffff;
              local_94 = 0xffffffff;
              local_ac = 0x54;
              FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x4d,(uint *)0x102,
                           &local_b0);
              FUN_10072b96(local_1c,param_2,param_3,0x36,local_18,&local_b0);
              return puVar3;
            }
            local_50 = *(uint *)(param_2 + 0xb0);
            puVar6 = &local_50;
            puVar8 = local_18;
          }
          local_34 = 0xffffffff;
          local_38 = 0xffffffff;
          local_3c = 0xffffffff;
          local_40 = 0xffffffff;
          local_4c = 0;
          FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x4d,puVar8,puVar6);
          return puVar3;
        }
        return param_1;
      }
      if (uVar4 == 0x1f) {
switchD_1006b351_caseD_2f:
        return param_1 + 3;
      }
      if (uVar4 == 0x12) {
        puVar3 = (uint *)FUN_10070ac1(local_18,0xf0000,3,0,param_2,param_3,'\0','\0');
        local_11 = *(undefined1 *)(param_2 + 0x314);
        local_50 = FUN_100c2e34(param_2 + 0x18,4,'\0');
        puVar6 = (uint *)(param_2 + 0x420);
        local_4c = local_11;
        *puVar6 = *puVar6 ^ 0x80000000;
        local_40 = 0xffffffff;
        local_3c = 0xffffffff;
        local_38 = 0xffffffff;
        local_34 = 0xffffffff;
        FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0);
        *puVar6 = *puVar6 ^ 0x80000000;
        FUN_100c40de(CONCAT31((int3)((uint)extraout_ECX >> 8),0xe4),
                     CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_2 + 0x314)));
        FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x32,
                     (uint *)(param_2 + 0x310),(uint *)(param_2 + 0x3c0));
        return puVar3;
      }
      if (uVar4 == 0x19) {
        FUN_100c3be1((int *)(param_2 + 0x18),param_3,4);
        return local_18;
      }
      if (uVar4 == 0x1a) {
        uVar4 = param_1[2];
        local_1c = (void *)(uVar4 & 0xf000000);
        uVar5 = (uVar4 >> 0x14 & 0x700 | uVar4 & 0x1800) >> 8;
        if (uVar5 == 0xe) {
          local_20 = (int *)(uVar4 & 0x7ff);
          if ((*(char *)(param_2 + 200) == '\0') ||
             (*(char *)(*(int *)(param_2 + 0x10) + 0x49d8 + (int)local_20) == '\0')) {
            uVar4 = 5;
            if (local_1c != (void *)0xd000000) {
              uVar4 = 0x40005;
            }
            FUN_100c3be1((int *)(param_2 + 0x18),param_3,uVar4);
          }
          else {
            iVar10 = *(int *)(*(int *)(param_2 + 0x10) + 0x49e8 + (int)local_20 * 4);
            if (local_1c == (void *)0xd000000) {
              bVar9 = iVar10 == 0;
            }
            else {
              bVar9 = iVar10 != 0;
            }
            if (bVar9) {
              FUN_100c3be1((int *)(param_2 + 0x18),param_3,4);
            }
          }
        }
        else if (uVar5 == 0x13) {
          uVar4 = 5;
          if (local_1c != (void *)0xd000000) {
            uVar4 = 0x40005;
          }
          FUN_100c3be1((int *)(param_2 + 0x18),param_3,uVar4);
        }
        goto switchD_1006b351_caseD_2f;
      }
      if (uVar4 == 0x1b) goto LAB_1006b1aa;
      if (uVar4 == 0x1c) {
        *param_4 = 1;
        return local_18;
      }
      if (uVar4 == 0x1d) goto switchD_1006b351_caseD_27;
      if (uVar4 != 0x1e) {
        return param_1;
      }
      uVar4 = 0x2c;
      puVar3 = (uint *)(param_2 + 0x18);
    }
    FUN_100c3be1((int *)puVar3,param_3,uVar4);
LAB_1006b802:
    return param_1 + 2;
  }
  if (0x4e < uVar4) {
    if (uVar4 == 0x5e) {
      puVar3 = (uint *)FUN_10069eb6(local_18,0xf0000,2,0,param_2,param_3,'\0','\0');
      FUN_1006a6f5((uint)local_20,param_2,param_3,'\x01');
      return puVar3;
    }
    if (uVar4 != 0x5f) {
      if (uVar4 != 0x60) {
        return param_1;
      }
      local_50 = *(uint *)(param_2 + 0x2b0) | 0x10000000;
      local_4c = (byte)(*local_18 >> 0x10) & 3;
      local_40 = 0xffffffff;
      local_3c = 0xffffffff;
      local_38 = 0xffffffff;
      local_34 = 0xffffffff;
      uVar4 = 3;
      if ((*local_18 & 0xf000000) != 0xd000000) {
        uVar4 = 0x40003;
      }
      FUN_100c3cfd((int *)(param_2 + 0x18),param_3,uVar4);
      goto LAB_1006b802;
    }
    uVar4 = param_1[3] & 0x7ff;
    local_24 = (int *)(param_1[3] >> 0x10);
    puVar3 = (uint *)FUN_10069eb6(local_18,0xf0000,2,0,param_2,param_3,'\0','\0');
    local_50 = 0;
    local_18 = (uint *)0x2;
    cVar2 = *(char *)(*(int *)(param_2 + 0x10) + 0x4880 + uVar4) * '\b';
    if (cVar2 == '\x10') {
      local_18 = (uint *)0x2;
      iVar10 = 0;
      uVar5 = uVar4;
    }
    else if (cVar2 == '\x18') {
      uVar5 = uVar4 + 5;
      local_18 = (uint *)0x3;
      iVar10 = 1;
      uVar4 = uVar4 + 4;
    }
    else {
      if (cVar2 != ' ') goto LAB_1006b89f;
      uVar5 = uVar4 + 10;
      local_18 = (uint *)0x3;
      iVar10 = 2;
      uVar4 = uVar4 + 8;
    }
    local_50 = FUN_100c2dae((uint *)(param_2 + 0x18),uVar4,iVar10,uVar5);
LAB_1006b89f:
    local_4c = (byte)local_24;
    puVar6 = (uint *)(param_2 + 0x3c0);
    puVar8 = &local_c0;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    local_c0 = local_c0 | 0x10000000;
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
    local_bc = *(byte *)(param_2 + 0x3c4) >> 6;
    FUN_100c4090(*(byte *)(param_2 + 0x3c4),(&UNK_100d5ea8)[(int)local_18]);
    FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x48);
    return puVar3;
  }
  if (uVar4 == 0x4e) {
    if (1 < *(byte *)(*(int *)(param_2 + 0x10) + 0x4a6c)) {
      puVar3 = (uint *)FUN_10070ac1(local_18,0xf0000,1,0,param_2,param_3,'\0','\x01');
      FUN_10072b96(local_1c,param_2,param_3,*(uint *)(param_2 + 0x470) | 0x19,
                   (uint *)(param_2 + 0x310),(uint *)(param_2 + 0x3c0));
      return puVar3;
    }
    return param_1;
  }
  switch(uVar4) {
  case 0x27:
switchD_1006b351_caseD_27:
    if (4 < *(uint *)(param_2 + 0x2d8)) {
      return local_18;
    }
    *(uint *)(param_2 + 0x2d8) = *(uint *)(param_2 + 0x2d8) - 1;
    local_20 = (int *)(param_2 + 0x18);
    FUN_100c3be1(local_20,param_3,0x1e);
    piVar7 = local_20;
    if (uVar4 == 0x1d) {
      FUN_100c3be1(local_20,param_3,0x1e);
    }
    uVar4 = 0x16;
    goto LAB_1006b638;
  case 0x28:
    uVar4 = *local_18;
    local_20 = (int *)(uVar4 & 0xf000000);
    local_11 = *(byte *)(*(byte *)(param_2 + 0x300) + 0x2e0 + param_2);
    uVar5 = (uVar4 >> 0x14 & 0x700 | uVar4 & 0x1800) >> 8;
    if (uVar5 == 0xe) {
      if ((*(char *)(param_2 + 200) != '\0') &&
         (*(char *)(*(int *)(param_2 + 0x10) + 0x49d8 + (uVar4 & 0x7ff)) != '\0')) {
        if (local_11 != 2) {
          local_11 = (*(int *)(*(int *)(param_2 + 0x10) + 0x49e8 + (uVar4 & 0x7ff) * 4) == 0) + 1;
        }
        bVar1 = *(char *)(param_2 + 0x300) + 1;
        *(byte *)(param_2 + 0x300) = bVar1;
        *(byte *)(bVar1 + 0x2e0 + param_2) = local_11;
        *(bool *)(param_3 + 3) = local_11 != 2;
        goto LAB_1006b802;
      }
      uVar4 = 0x1f;
      if (local_20 != (int *)0xd000000) {
        uVar4 = 0x4001f;
      }
      FUN_100c3be1((int *)(param_2 + 0x18),param_3,uVar4);
      *(char *)(param_2 + 0x300) = *(char *)(param_2 + 0x300) + '\x01';
    }
    else {
      if (uVar5 != 0x13) goto LAB_1006b802;
      uVar4 = 0x1f;
      if (local_20 != (int *)0xd000000) {
        uVar4 = 0x4001f;
      }
      FUN_100c3be1((int *)(param_2 + 0x18),param_3,uVar4);
      *(char *)(param_2 + 0x300) = *(char *)(param_2 + 0x300) + '\x01';
      local_11 = (local_11 != 2) - 1U & 2;
    }
    *(byte *)(*(byte *)(param_2 + 0x300) + 0x2e0 + param_2) = local_11;
    goto LAB_1006b802;
  case 0x29:
    param_1 = (uint *)FUN_1006a1df(local_18,2,0,param_2,'\0','\0');
    local_50 = FUN_1006a6f5((uint)local_20,param_2,param_3,'\0');
    local_50 = local_50 | 0x10000000;
    local_4c = 0;
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
    FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x4001f);
    bVar1 = *(byte *)(param_2 + 0x300) + 1;
    cVar2 = *(char *)(*(byte *)(param_2 + 0x300) + 0x2e0 + param_2);
    *(byte *)(param_2 + 0x300) = bVar1;
    *(byte *)(bVar1 + 0x2e0 + param_2) = (cVar2 != '\x02') - 1U & 2;
    break;
  case 0x2a:
    uVar4 = (uint)*(byte *)(param_2 + 0x300);
    cVar2 = *(char *)(uVar4 + 0x2e0 + param_2);
    if (cVar2 != '\0') {
      if (*(char *)(uVar4 + 0x2df + param_2) != '\x02') {
        cVar2 = (cVar2 == '\x01') + '\x01';
      }
      *(char *)(uVar4 + 0x2e0 + param_2) = cVar2;
      *(bool *)(param_3 + 3) = cVar2 != '\x02';
      return local_18;
    }
    uVar4 = 0x12;
    piVar7 = (int *)(param_2 + 0x18);
LAB_1006b638:
    FUN_100c3be1(piVar7,param_3,uVar4);
    param_1 = local_18;
    break;
  case 0x2b:
    if (*(char *)(*(byte *)(param_2 + 0x300) + 0x2e0 + param_2) == '\0') {
      FUN_100c3be1((int *)(param_2 + 0x18),param_3,0x15);
    }
    *(char *)(param_2 + 0x300) = *(char *)(param_2 + 0x300) + -1;
    *(bool *)(param_3 + 3) = *(char *)(*(byte *)(param_2 + 0x300) + 0x2e0 + param_2) != '\x02';
    param_1 = local_18;
    break;
  case 0x2c:
    FUN_100c3be1((int *)(param_2 + 0x18),param_3,2);
    param_1 = local_18;
    break;
  case 0x2d:
    param_1 = (uint *)FUN_1006a1df(local_18,2,0,param_2,'\0','\0');
    local_50 = FUN_1006a6f5((uint)local_20,param_2,param_3,'\0');
    local_50 = local_50 | 0x10000000;
    local_4c = 0;
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
    FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x40003);
    break;
  case 0x2e:
    param_1 = (uint *)FUN_10070ac1(local_18,0xf0000,1,0,param_2,param_3,'\0','\0');
    FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x40);
    FUN_100c3cfd((int *)(param_2 + 0x18),param_3,0x1b);
    break;
  case 0x2f:
    goto switchD_1006b351_caseD_2f;
  case 0x30:
    param_1 = param_1 + 6;
  }
  return param_1;
}

