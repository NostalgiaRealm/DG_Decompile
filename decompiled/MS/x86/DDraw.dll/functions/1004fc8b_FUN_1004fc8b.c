/*
 * FUN_1004fc8b at 1004fc8b
 * char __stdcall FUN_1004fc8b(int * param_1, char param_2)
 * Address ranges: 1004fc8b-1004fcf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1004fc8b(int *param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  
  cVar3 = '\x01';
  uVar4 = (**(code **)(**(int **)(*param_1 + 0xc) + 0x20))(*(int **)(*param_1 + 0xc));
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  if ((uVar2 <= (uint)param_1[5]) &&
     ((uVar2 < (uint)param_1[5] || ((uint)uVar4 < (uint)param_1[4])))) {
    cVar3 = '\x01';
    if (param_1[1] != -1) {
      uVar2 = FUN_10052996((void *)(param_1[1] + 4),'\0');
      cVar3 = (char)uVar2;
      if (cVar3 == '\0') {
        return '\0';
      }
    }
    if (param_2 != '\0') {
      piVar1 = *(int **)(*param_1 + 0xc);
      (**(code **)(*piVar1 + 0x24))(piVar1,param_1[4],param_1[5],*(undefined4 *)(*param_1 + 0x10));
      WaitForSingleObject(*(HANDLE *)(*param_1 + 0x10),0xffffffff);
    }
  }
  return cVar3;
}

