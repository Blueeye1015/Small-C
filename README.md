# Small-C

Gift For Mr.Xia & Xueza

* <program>∷={<declaration_list><statement_list>}
* <declaration_list>∷=<declaration_list><declaration_stat>|<declaration_list>|ε
* <declaration_stat>∷=int ID;
* <statement_list>∷=<statement_list>|<statement>|<statement>|ε
* <statement>∷=<if_stat>|<while_stat<read_stat>|<write_stat>|<compound_stat>|<expression_stat>
* <if_stat>∷=if (<expression>) <statement> [else <statement>]
* <while_stat>∷=while (<expression>) <statement>
* <write_stat>∷=write <expression>;
* <read_stat>∷=read ID;
* <compound_stat>∷={<statement_list>}
* <expression_stat>∷=<expression>;|;
* <expression>∷=ID=<bool_expr>|<bool_expr>
* <bool_expr>∷=<additive_expr>|<additive_expr>(>|<|>=|<=|==|!=)<additive_expr>
* <additive_expr>∷=<term>{(+|-)<term>}
* <term>∷=<factor>{(*|/)<factor>}
* <factor>∷=(<expression>)|ID|NUM
