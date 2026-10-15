/*
 * FUN_1002a4c3 at 1002a4c3
 * int __fastcall FUN_1002a4c3(int * param_1, uint * param_2)
 * Address ranges: 1002a4c3-1002a878
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1002a4c3(int *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *extraout_EDX;
  int extraout_EDX_00;
  char local_868 [1024];
  char local_468 [5];
  byte local_463 [6];
  byte local_45d [1013];
  undefined2 local_68 [16];
  undefined2 auStack_48 [24];
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  local_14 = 0;
  local_8 = 0;
  local_c = 0;
  local_18 = param_1;
  uVar3 = FUN_1002a375(param_1,local_468,local_868,&local_10,&local_14,&local_c);
  if (((((char)uVar3 != '\0') && (iVar4 = FUN_1002a473(local_468,"3df v",5), (char)iVar4 != '\0'))
      && (iVar4 = FUN_1002a49a(local_463,(int *)&local_8), iVar4 != 0)) &&
     (((local_463[iVar4] == 0x2e &&
       (iVar5 = FUN_1002a49a(local_463 + iVar4 + 1,extraout_EDX), iVar5 != 0)) &&
      ((local_463[iVar5 + iVar4 + 1] == 0 &&
       (uVar3 = FUN_1002a375(param_1,local_468,local_868,&local_10,&local_14,&local_c),
       (char)uVar3 != '\0')))))) {
    local_8 = 0;
    do {
      uVar6 = local_8;
      iVar4 = FUN_1002a473(local_468,(&PTR_DAT_100560e8)[local_8],-1);
      if ((char)iVar4 != '\0') {
        param_2[5] = (&DAT_10056098)[uVar6];
        if (0xc < uVar6) {
          return 0;
        }
        uVar3 = FUN_1002a375(param_1,local_468,local_868,&local_10,&local_14,&local_c);
        if ((char)uVar3 == '\0') {
          return 0;
        }
        iVar4 = FUN_1002a473(local_468,"lod range: ",0xb);
        if ((char)iVar4 == '\0') {
          return 0;
        }
        iVar4 = FUN_1002a49a(local_45d,(int *)&local_8);
        if (iVar4 == 0) {
          return 0;
        }
        uVar7 = 1;
        for (uVar6 = local_8; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1) {
          uVar7 = uVar7 + 1;
        }
        uVar7 = ~-(uint)(uVar6 != 1) & uVar7;
        if (uVar7 == 0) {
          return 0;
        }
        bVar1 = local_45d[iVar4];
        param_2[2] = *(uint *)(&DAT_10055534 + uVar7 * 4);
        if (bVar1 != 0x20) {
          return 0;
        }
        iVar5 = FUN_1002a49a(local_45d + iVar4 + 1,(int *)&local_8);
        if (iVar5 == 0) {
          return 0;
        }
        if (local_45d[iVar5 + iVar4 + 1] != 0) {
          return 0;
        }
        uVar7 = 1;
        for (uVar6 = local_8; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1) {
          uVar7 = uVar7 + 1;
        }
        uVar7 = ~-(uint)(uVar6 != 1) & uVar7;
        if (uVar7 == 0) {
          return 0;
        }
        param_2[3] = *(uint *)(&DAT_10055534 + uVar7 * 4);
        uVar3 = FUN_1002a375(param_1,local_468,local_868,&local_10,&local_14,&local_c);
        if ((char)uVar3 == '\0') {
          return 0;
        }
        iVar4 = FUN_1002a473(local_468,"aspect ratio: ",0xe);
        if ((char)iVar4 == '\0') {
          return 0;
        }
        uVar6 = 0;
        while (iVar4 = FUN_1002a473((char *)(local_45d + 3),(&PTR_DAT_100560cc)[uVar6],-1),
              (char)iVar4 == '\0') {
          uVar6 = uVar6 + 1;
          if (6 < uVar6) {
            return 0;
          }
        }
        uVar7 = (&DAT_1005607c)[uVar6];
        param_2[4] = uVar7;
        if (6 < uVar6) {
          return 0;
        }
        uVar7 = FUN_1000415b(param_2[3],uVar7);
        uVar6 = param_2[5];
        *param_2 = uVar7 >> 0x10;
        param_2[1] = uVar7 & 0xffff;
        iVar5 = FUN_100041c6(3,param_2[2],param_2[3],extraout_EDX_00,uVar6);
        iVar4 = local_c;
        piVar2 = local_18;
        local_8 = 0;
        param_2[0x107] = iVar5 + 7U & 0xfffffff8;
        if (uVar6 == 1) {
LAB_1002a800:
          (**(code **)*local_18)(local_10 + -0x400 + local_c,0,0);
          iVar5 = (**(code **)(*piVar2 + 4))(0x50,local_68,&local_8);
          if (iVar5 != 0) {
            return 0;
          }
          if (local_8 != 0x50) {
            return 0;
          }
          uVar6 = 0;
          do {
            *(char *)((int)param_2 + uVar6 + 0x18) = (char)((ushort)local_68[uVar6] >> 8);
            uVar6 = uVar6 + 1;
          } while (uVar6 < 0x10);
          uVar6 = 0;
          do {
            *(ushort *)((int)param_2 + uVar6 * 2 + 0x28) =
                 CONCAT11((char)auStack_48[uVar6],(char)((ushort)auStack_48[uVar6] >> 8));
            uVar6 = uVar6 + 1;
          } while (uVar6 < 0x18);
          local_c = iVar4 + 0x50;
        }
        else {
          if (uVar6 != 5) {
            if (uVar6 == 9) goto LAB_1002a800;
            if (uVar6 != 0xe) goto LAB_1002a86a;
          }
          (**(code **)*local_18)(local_10 + -0x400 + local_c,0,0);
          iVar4 = (**(code **)(*piVar2 + 4))(0x400,param_2 + 6,&local_8);
          if (iVar4 != 0) {
            return 0;
          }
          if (local_8 != 0x400) {
            return 0;
          }
          uVar6 = 0;
          do {
            param_2[uVar6 + 6] =
                 ((param_2[uVar6 + 6] << 8 | (uint)*(byte *)((int)param_2 + uVar6 * 4 + 0x19)) << 8
                 | (uint)*(byte *)((int)param_2 + uVar6 * 4 + 0x1a)) << 8 |
                 param_2[uVar6 + 6] >> 0x18;
            uVar6 = uVar6 + 1;
          } while (uVar6 < 0x100);
          local_c = local_c + 0x400;
        }
LAB_1002a86a:
        return local_10 + -0x400 + local_c;
      }
      local_8 = uVar6 + 1;
    } while (local_8 < 0xd);
  }
  return 0;
}

