/*
 * FUN_100576ff at 100576ff
 * undefined __thiscall FUN_100576ff(void * this, int * param_1)
 * Address ranges: 100576ff-10057793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_100576ff(void *this,int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int aiStack_4c [16];
  int local_c;
  int *local_8;
  
  piVar5 = param_1;
  iVar4 = 0;
  iVar6 = 0;
  iVar3 = *param_1;
  local_8 = this;
  while (local_c = iVar4, iVar3 != 0) {
    pcVar7 = (char *)piVar5[iVar6];
    pcVar1 = pcVar7 + 1;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_10057629(this,(undefined4 *)piVar5[iVar6],(uint)(pcVar7 + (1 - (int)pcVar1)));
    this = local_8;
    iVar4 = local_c + (int)(pcVar7 + (1 - (int)pcVar1));
    aiStack_4c[iVar6] = local_c + 0x38;
    iVar6 = iVar6 + 1;
    iVar3 = piVar5[iVar6];
  }
  param_1 = (int *)0xabababab;
  FUN_10057629(this,&param_1,-iVar4 & 3U);
  iVar6 = 2;
  iVar3 = *local_8;
  *(uint *)(iVar3 + 4) = local_c + (-iVar4 & 3U | 0x38);
  *(undefined4 *)(iVar3 + 8) = 2;
  piVar5 = (int *)(*local_8 + 0x10);
  do {
    *piVar5 = aiStack_4c[*piVar5];
    piVar5 = piVar5 + 6;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

