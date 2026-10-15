/*
 * FUN_1800114cc at 1800114cc
 * undefined __fastcall FUN_1800114cc(uint * param_1, longlong * param_2, byte * param_3)
 * Address ranges: 1800114cc-180011ad9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800114cc(uint *param_1,longlong *param_2,byte *param_3)

{
  ushort uVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  LPVOID pvVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  longlong *plVar9;
  int iVar10;
  char cVar11;
  byte *local_res18;
  undefined8 local_res20;
  
  bVar6 = *param_3 & 0x7f;
  if (0x60 < bVar6) {
    return;
  }
  local_res18 = param_3;
  if (bVar6 == 0x60) {
    FUN_180010600(param_1,param_2,(longlong)param_3,'\0');
  }
  else {
    if (bVar6 < 0x28) {
      if (bVar6 == 0x27) {
        cVar11 = '\0';
LAB_180011842:
        FUN_18001017c(param_1,param_2,param_3,cVar11);
        return;
      }
      if (bVar6 != 0x19) {
        if (bVar6 == 0x1a) {
          if (param_3[3] == 0) {
            FUN_1800019cc(param_2,0x8810200012010,*param_1 | 0x80000000,-1,
                          (uint)*(ushort *)(param_3 + 0x10) << 4,0);
          }
          else {
            plVar9 = param_2;
            uVar4 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 0x12),0xe4,'\0',0,'\x01',
                                  '\0');
            local_res20 = FUN_18000cef4((longlong)param_1,plVar9,-1,'\x01');
            uVar7 = (uint)local_res20;
            FUN_1800019cc(param_2,0x500200100700,uVar7,(int)uVar4,0,0);
            param_3 = local_res18;
            FUN_1800019cc(param_2,0x20810200012010,uVar7,-1,0,
                          1 << ((byte)*(undefined4 *)(local_res18 + 0xc) & 3));
            FUN_18000cf80((longlong)param_1,param_2,(uint *)&local_res20);
          }
          FUN_180011adc(param_1,param_2,'\0');
          FUN_1800019cc(param_2,(ulonglong)(param_3[1] != 0) + 4 << 0x28 | 0x700100030000,0xffffffff
                        ,-1,0,0);
          iVar10 = (int)param_2[1] - (int)*param_2;
          FUN_1800019cc(param_2,0xe80100010000,0xffffffff,-1,0,0);
          pvVar5 = FUN_18000fe84((longlong)param_1,(uint)*(ushort *)(local_res18 + 0x10));
          local_res18 = (byte *)CONCAT44(local_res18._4_4_,
                                         -(uint)((char)param_1[0x86] != '\0') & 0x80000000 |
                                         (int)param_2[1] - (int)*param_2);
          FUN_180004454((longlong *)((longlong)pvVar5 + 8),(undefined4 *)&local_res18);
          *(char *)((ulonglong)(iVar10 - 1) + *param_2) =
               ((char)param_2[1] - (char)*param_2) - (char)iVar10;
          return;
        }
        if (bVar6 == 0x1b) {
          cVar11 = '\x01';
        }
        else {
          if (bVar6 == 0x1c) {
            if ((char)param_1[0x86] == '\0') {
              return;
            }
            FUN_180011adc(param_1,param_2,'\0');
            FUN_1800019cc(param_2,0xc30100000000,0xffffffff,-1,0,0);
            return;
          }
          if (bVar6 == 0x1d) {
            cVar11 = '\x01';
            goto LAB_180011842;
          }
          if (bVar6 == 0x1e) {
            lVar2 = 0;
            *(ulonglong *)(param_1 + 0x28) =
                 *(ulonglong *)(param_1 + 0x28) | *(ulonglong *)(param_1 + 0x26);
            do {
              param_1[lVar2 + 0x16] = 0xffffffff;
              param_1[lVar2 + 6] = 0xffffffff;
              lVar2 = lVar2 + 1;
            } while (lVar2 != 0x10);
            param_1[0x27] = 0;
            param_1[0x26] =
                 1 << ((byte)param_1[2] & 0x1f) | 1 << (param_1[1] & 0x1f) | 1 << (*param_1 & 0x1f);
            piVar3 = FUN_18000fe84((longlong)param_1,(uint)*(ushort *)(param_3 + 0x10));
            *piVar3 = (int)param_2[1] - (int)*param_2;
            return;
          }
          if (bVar6 != 0x26) {
            return;
          }
          cVar11 = '\0';
        }
        FUN_18000ff2c(param_1,param_2,(longlong)param_3,cVar11);
        return;
      }
      FUN_180011adc(param_1,param_2,'\0');
      FUN_1800019cc(param_2,0xe80100010000,0xffffffff,-1,0,0);
      pvVar5 = FUN_18000fe84((longlong)param_1,(uint)*(ushort *)(param_3 + 0x10));
      puVar8 = (uint *)((longlong)pvVar5 + 8);
      local_res18 = (byte *)CONCAT44(local_res18._4_4_,
                                     -(uint)((char)param_1[0x86] != '\0') & 0x80000000 |
                                     (int)param_2[1] - (int)*param_2);
      goto LAB_180011ab9;
    }
    if (bVar6 == 0x28) {
      if (param_3[3] == 0) {
        uVar1 = *(ushort *)(param_3 + 0x10);
        uVar7 = *param_1;
        FUN_180011adc(param_1,param_2,'\0');
        FUN_1800019cc(param_2,0x8810200012010,uVar7 | 0x80000000,-1,(uint)uVar1 << 4,0);
        FUN_1800019cc(param_2,0x840100110000,0xffffffff,-1,0,0);
      }
      else {
        FUN_180010600(param_1,param_2,(longlong)param_3,'\x01');
      }
      uVar7 = (int)param_2[1] - (int)*param_2;
LAB_180011a6a:
      param_1[(ulonglong)param_1[0x85] * 2 + 0x54] = uVar7;
      param_1[(ulonglong)param_1[0x85] * 2 + 0x55] = 0;
      param_1[0x85] = param_1[0x85] + 1;
      return;
    }
    if (bVar6 == 0x29) {
      FUN_180010460(param_1,param_2,(longlong)param_3,1);
      uVar7 = (int)param_2[1] - (int)*param_2;
      goto LAB_180011a6a;
    }
    if (bVar6 == 0x2a) {
      FUN_180011adc(param_1,param_2,'\0');
      FUN_1800019cc(param_2,0xe90100012000,0xffffffff,-1,0,0x12345678);
      param_1[(ulonglong)(param_1[0x85] - 1) * 2 + 0x55] = (int)param_2[1] - (int)*param_2;
      uVar7 = param_1[(ulonglong)(param_1[0x85] - 1) * 2 + 0x54];
      if (uVar7 == 0) {
        return;
      }
      *(uint *)((ulonglong)(uVar7 - 4) + *param_2) = ((int)param_2[1] - uVar7) - (int)*param_2;
      param_1[(ulonglong)(param_1[0x85] - 1) * 2 + 0x54] = 0;
      return;
    }
    if (bVar6 == 0x2b) {
      FUN_180011adc(param_1,param_2,'\0');
      param_1[0x85] = param_1[0x85] - 1;
      uVar7 = param_1[(ulonglong)param_1[0x85] * 2 + 0x54];
      if (uVar7 != 0) {
        *(uint *)((ulonglong)(uVar7 - 4) + *param_2) = ((int)param_2[1] - uVar7) - (int)*param_2;
      }
      uVar7 = param_1[(ulonglong)param_1[0x85] * 2 + 0x55];
      if (uVar7 == 0) {
        return;
      }
      *(uint *)((ulonglong)(uVar7 - 4) + *param_2) = ((int)param_2[1] - uVar7) - (int)*param_2;
      return;
    }
    if (bVar6 == 0x2c) {
      FUN_180011adc(param_1,param_2,'\0');
      FUN_1800019cc(param_2,0xe90100012000,0xffffffff,-1,0,0x12345678);
    }
    else {
      if (bVar6 != 0x2d) {
        return;
      }
      FUN_180010460(param_1,param_2,(longlong)param_3,0);
    }
  }
  local_res18 = (byte *)CONCAT44(local_res18._4_4_,(int)param_2[1] - (int)*param_2);
  puVar8 = param_1 + (ulonglong)(param_1[0x84] - 1) * 8 + 0x38;
LAB_180011ab9:
  FUN_180004454((longlong *)puVar8,(undefined4 *)&local_res18);
  return;
}

