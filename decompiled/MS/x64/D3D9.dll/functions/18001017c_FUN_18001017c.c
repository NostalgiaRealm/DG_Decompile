/*
 * FUN_18001017c at 18001017c
 * undefined __fastcall FUN_18001017c(uint * param_1, longlong * param_2, undefined8 param_3, char param_4)
 * Address ranges: 18001017c-18001045d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001017c(uint *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined8 local_res8;
  undefined8 local_res18;
  
  plVar7 = param_2;
  local_res18 = param_3;
  FUN_180011adc(param_1,param_2,'\0');
  param_1[0x84] = param_1[0x84] - 1;
  if (param_4 != '\0') {
    cVar12 = '\x01';
    sVar9 = -1;
    puVar5 = param_1;
    uVar2 = FUN_18000cef4((longlong)param_1,plVar7,-1,'\x01');
    local_res8 = uVar2;
    uVar3 = FUN_18000cef4((longlong)puVar5,plVar7,sVar9,cVar12);
    local_res18 = uVar3;
    FUN_1800019cc(param_2,0x890200000210,(uint)uVar2,*param_1 | 0x80000000,
                  param_1[(ulonglong)param_1[0x84] * 8 + 0x34] << 4 | 8,0);
    FUN_1800019cc(param_2,0x890200000210,(uint)uVar3,*param_1 | 0x80000000,0x44c0,0);
    FUN_1800019cc(param_2,0x10200000210,((uint)uVar3 & 0xff | 0xffc00200) << 8 | *param_1,
                  (uint)uVar2,0x44ac,0);
    FUN_18000cf80((longlong)param_1,param_2,(uint *)&local_res18);
    FUN_18000cf80((longlong)param_1,param_2,(uint *)&local_res8);
  }
  FUN_1800019cc(param_2,0x28810200012010,0x80000004,-1,0,1);
  iVar10 = param_1[(ulonglong)param_1[0x84] * 8 + 0x36] - ((int)param_2[1] - (int)*param_2);
  bVar1 = 0xff < iVar10 + 0x7eU;
  if (bVar1) {
    iVar4 = 6;
  }
  else {
    iVar4 = 2;
  }
  FUN_1800019cc(param_2,(-(ulonglong)!bVar1 & 0xffffeffffff20000) + 0x850100110000,0xffffffff,-1,0,
                iVar10 - iVar4);
  uVar6 = param_1[0x84];
  if (param_1[(ulonglong)uVar6 * 8 + 0x3a] != 0) {
    uVar8 = 0;
    do {
      iVar10 = *(int *)(*(longlong *)(param_1 + (ulonglong)uVar6 * 8 + 0x38) + uVar8 * 4);
      uVar11 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar11;
      *(int *)((ulonglong)(iVar10 - 4) + *param_2) = ((int)param_2[1] - iVar10) - (int)*param_2;
      uVar6 = param_1[0x84];
    } while (uVar11 < param_1[(ulonglong)uVar6 * 8 + 0x3a]);
  }
  uVar8 = (ulonglong)uVar6;
  FUN_1800fbcf0(*(LPVOID *)(param_1 + uVar8 * 8 + 0x38));
  (param_1 + uVar8 * 8 + 0x38)[0] = 0;
  (param_1 + uVar8 * 8 + 0x38)[1] = 0;
  (param_1 + uVar8 * 8 + 0x3a)[0] = 0;
  (param_1 + uVar8 * 8 + 0x3a)[1] = 0;
  if (param_4 != '\0') {
    FUN_1800019cc(param_2,0x28810200012010,*param_1 | 0x80000000,-1,0x44c0,1);
  }
  FUN_1800019cc(param_2,0x810200012013,4,-1,0,8);
  *(uint *)((ulonglong)(param_1[(ulonglong)param_1[0x84] * 8 + 0x35] - 4) + *param_2) =
       ((int)param_2[1] - param_1[(ulonglong)param_1[0x84] * 8 + 0x35]) - (int)*param_2;
  return;
}

