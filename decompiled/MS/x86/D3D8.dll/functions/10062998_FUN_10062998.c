/*
 * FUN_10062998 at 10062998
 * char __thiscall FUN_10062998(void * this, int param_1, int param_2, uint param_3, char param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 10062998-10062a21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall
FUN_10062998(void *this,int param_1,int param_2,uint param_3,char param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  undefined4 local_10;
  undefined4 local_c;
  
  cVar5 = '\x02';
  uVar2 = FUN_10062967(this,param_1,param_2);
  if ((char)uVar2 != '\0') {
    cVar4 = '\x03';
    if (param_4 != '\0') {
      if ((param_3 & 1) == 0) {
        if ((param_3 & 2) != 0) {
          cVar4 = cVar5;
        }
      }
      else {
        cVar4 = '\x01';
      }
    }
    piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
    iVar3 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)((int)this + 0x74),
                       *(int *)((int)this + 0x2c) * param_2 + param_1,cVar4,(param_3 & 4) << 0x12,
                       &local_10);
    cVar5 = '\0';
    if (iVar3 < 0) {
      cVar5 = (iVar3 != -0x7785fff6) + '\x01';
    }
    else {
      *param_5 = local_10;
      *param_6 = local_c;
    }
  }
  return cVar5;
}

