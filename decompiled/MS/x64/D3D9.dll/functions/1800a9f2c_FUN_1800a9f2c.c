/*
 * FUN_1800a9f2c at 1800a9f2c
 * undefined __fastcall FUN_1800a9f2c(longlong * param_1, undefined8 * param_2)
 * Address ranges: 1800a9f2c-1800aa003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a9f2c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  uVar5 = (int)param_2[1] - (int)*param_2;
  uVar6 = (int)((ulonglong)param_2[1] >> 0x20) - (int)((ulonglong)*param_2 >> 0x20);
  if ((uVar5 != *(uint *)(param_1 + 0x15)) || (uVar6 != *(uint *)((longlong)param_1 + 0xac))) {
    param_1[0x15] = CONCAT44(uVar6,uVar5);
    local_res10[0] = 0;
    local_res8[0] = 0;
    bVar3 = FUN_1800331a0(uVar5,uVar6,&local_res20,local_res18,local_res10,local_res8);
    iVar2 = local_res10[0];
    iVar1 = local_res8[0];
    if (bVar3) {
      if (((int)param_1[0x14] != local_res10[0]) ||
         (*(int *)((longlong)param_1 + 0xa4) != local_res8[0])) {
        cVar4 = (**(code **)(*param_1 + 0x160))
                          (param_1,local_res10[0],local_res8[0],local_res20,local_res18[0]);
        if (cVar4 == '\0') {
          param_1[0x14] = 0;
        }
        else {
          *(int *)(param_1 + 0x14) = iVar2;
          *(int *)((longlong)param_1 + 0xa4) = iVar1;
        }
      }
    }
  }
  return;
}

