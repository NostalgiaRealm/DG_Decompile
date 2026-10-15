/*
 * FUN_1000cb00 at 1000cb00
 * undefined FUN_1000cb00(void)
 * Address ranges: 1000cb00-1000ce2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000cb00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 local_b0 [2];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  undefined1 auStack_90 [12];
  int local_84;
  int local_7c;
  undefined4 local_78;
  uint uStack_74;
  int local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  
  uVar13 = 0x8876086c;
  if ((((*(int *)(param_3 + 0x18) == param_1) && (*(int *)(param_3 + 0x28) == 0x15)) &&
      (*(int *)(param_3 + 0x34) - 2U < 2)) &&
     (((*(uint *)(*(int *)(param_3 + 4) + 0xb8) >> 0xb & 1) == 0 &&
      (uVar13 = 0x88760868, *(char *)(param_1 + 0x58bd) == '\0')))) {
    piVar2 = (int *)(param_1 + 0xb2c);
    uVar13 = 0x8876086c;
    FUN_100045b0(*(undefined4 *)(param_1 + 0xacc),*piVar2,&local_a0);
    uVar4 = local_a0;
    uVar3 = (uint)local_a0;
    if (((uint)local_a0 <= *(uint *)(param_3 + 0x40)) &&
       (uVar5 = local_a0._4_4_, local_a0._4_4_ <= *(uint *)(param_3 + 0x44))) {
      local_a0 = 0;
      uVar13 = 0x80004005;
      local_98 = uVar3;
      uStack_94 = uVar5;
      if ((&DAT_10138254)[*piVar2 * 8] == '\0') {
        local_64 = 0;
        local_78 = 0x28;
        uStack_74 = uVar3;
        local_70 = -uVar5;
        local_6c = 0x200001;
        local_5c = 0;
        local_54 = 0;
        local_b0[0] = 0;
        iVar7 = (*(code *)PTR_FUN_1013400c)(0,&local_78,0,local_b0,0,0);
        if (iVar7 != 0) {
          iVar8 = (*(code *)PTR_FUN_10134004)(0);
          if (iVar8 != 0) {
            iVar9 = (*(code *)PTR_FUN_10134024)(iVar7,0x18,auStack_90);
            if (iVar9 == 0x18) {
              iVar7 = (*(code *)PTR_FUN_10134034)(iVar8,iVar7);
              iVar9 = (*(code *)PTR_FUN_101341c8)(0,0,3);
              if (iVar9 != 0) {
                iVar10 = FUN_100194a0(param_3,&local_a8,&local_a0,0x10,0);
                if (-1 < iVar10) {
                  (*(code *)__hybrid_CompilerIAT)
                            (iVar8,0,0,uVar4 & 0xffffffff,uVar5,iVar9,
                             (int)*(undefined8 *)(&DAT_10138980 + *piVar2 * 0x228),
                             (int)((ulonglong)*(undefined8 *)(&DAT_10138980 + *piVar2 * 0x228) >>
                                  0x20),0xcc0020);
                  uVar11 = 0;
                  if (uVar5 != 0) {
                    do {
                      uVar12 = 0;
                      if (uVar3 != 0) {
                        do {
                          iVar10 = uVar12 * 4;
                          iVar1 = uVar12 * 4;
                          uVar12 = uVar12 + 1;
                          *(uint *)(local_a4 + iVar1) = *(uint *)(local_7c + iVar10) | 0xff000000;
                        } while (uVar12 < uVar3);
                      }
                      uVar11 = uVar11 + 1;
                      local_7c = local_84 + local_7c;
                      local_a4 = local_a8 + local_a4;
                    } while (uVar11 < uVar5);
                  }
                  FUN_100195a0(param_3);
                  uVar13 = 0;
                }
                (*(code *)PTR_FUN_10134254)(0,iVar9);
              }
            }
            iVar7 = (*(code *)PTR_FUN_10134034)(iVar8,iVar7);
          }
          (*(code *)PTR_FUN_10134018)(iVar7);
        }
      }
      else if ((*(char *)(param_2 + 0xb5) == '\0') &&
              (cVar6 = FUN_10009af0(param_1,*(undefined4 *)(param_2 + 0x30),param_3,1,&local_a0,0),
              cVar6 != '\0')) {
        uVar13 = 0;
      }
    }
  }
  return uVar13;
}

